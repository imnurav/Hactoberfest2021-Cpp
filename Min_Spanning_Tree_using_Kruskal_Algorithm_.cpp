#include <iostream>

using namespace std;

class set_disjoint					//Classs Declaration
{
public:
    int dset[20];

    set_disjoint(int v)
    {
        for(int i=0;i<=v;i++)			//for loop
        {
            dset[i] = i;
        }
    }

    int search_root(int v)			//find root of tree
    {
        while(v != dset[v])
        {
            v = dset[v];
        }
        return v;
    }

    void take_union(int e1, int e2)					//merge vertex edge relation
    {
        int r1 = search_root(e1);			
        int r2 = search_root(e2);

        if(e1 == r1 && e2 == r2)
        {
            dset[e1] = e2;
        }
        else if(r1 != r1 && e2 == r2)
        {
            dset[e2] = e1;
        }
        else if(e1 == r1 && e2!= r2)
        {
            dset[e1] = e2;
        }
        else if(e1 != r1 && e2 != r2)
        {
            dset[r1] = r2;
        }
    }
};

class edge					//Classs Declaration
{
public:
    int e1;
    int e2;
    int wt;
};

class graph					//Class Graph Created
{
public:
    int v;					//Variable Declaration
    int e;
    edge ed[20];

    graph(int vertices, int edges)
    {
        v = vertices;
        e = edges;
    }

    void graph_accept();			//Functions
    void graph_display();
    void kruskal_mst();
    void edgesort();

};

void graph::edgesort()				//Sort Edge Function
{
    edge temp;								//arrange in ascending order
    for(int i=0;i<e;i++)				//for loop
    {
        for(int j=0;j<e-i-1;j++)				
        {
            if(ed[j].wt > ed[j+1].wt)		
            {
              temp.e1 = ed[j].e1;
              temp.e2 = ed[j].e2;
              temp.wt = ed[j].wt;

              ed[j].e1 = ed[j+1].e1;
              ed[j].e2 = ed[j+1].e2;
              ed[j].wt = ed[j+1].wt;

              ed[j+1].e1 = temp.e1;
              ed[j+1].e2 = temp.e2;
              ed[j+1].wt = temp.wt;
            }
        }
    }
}
void graph::kruskal_mst()			//kruskal Function
{
    edge mst[20];			//edge for minimum spanning tree
    int mst_ctr = 0;			//iterator
    int mst_cost = 0;
    set_disjoint dj(v);
    edgesort();
    cout<<"\n Edges after sorting: ";
    graph_display();
    cout<<"\n";

    for(int i=0;i<e;i++)		//for loop
    {
        int r1 = dj.search_root(ed[i].e1);				//find edge values
        int r2 = dj.search_root(ed[i].e2);
        if(r1 != r2)							//if both edge are not same check condition
        {
            mst[mst_ctr].e1 = ed[i].e1;
            mst[mst_ctr].e2 = ed[i].e2;
            mst[mst_ctr].wt = ed[i].wt;
            mst_ctr++;
            mst_cost = mst_cost + ed[i].wt;
            dj.take_union(ed[i].e1,ed[i].e2);
        }
    }

    cout<<"\n MST is : ";
    for(int i=0;i<mst_ctr;i++)
    {
        cout<<"\n   "<<mst[i].e1<<"     "<<mst[i].e2<<"     "<<mst[i].wt;
    }
    cout<<"\n Total cost of MST is: "<<mst_cost;

}
void graph::graph_accept()			//Accept Function
{
    for(int i=0;i<e;i++)
    {
        cout<<"\n Enter e1 :";
        cin>>ed[i].e1;
        cout<<"\n Enter e2 :";
        cin>>ed[i].e2;
        cout<<"\n Enter weight :";
        cin>>ed[i].wt;
    }
}

void graph::graph_display()				//Display Function
{
    for(int i=0;i<e;i++)
    {
        cout<<"\n   "<<ed[i].e1<<"     "<<ed[i].e2<<"     "<<ed[i].wt;
    }
}

int main()						//Main Function
{

    int v, e;					//Variable Declaration
    cout<<"<---------------------Minimum Spanning Tree Using Kruskal Algorithm--------------------->\n";
    cout<<"\n Enter the number of vertics : ";
    cin>>v;
    cout<<"\n Enter the number of edges : ";
    cin>>e;

    graph g(v, e);					//Function Call
    g.graph_accept();
    g.graph_display();
    g.kruskal_mst();
}
