#include <bits/stdc++.h>
#include <stack>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
void PrintStack(stack<pair<int, int>> s)
{
    stack<pair<int, int>> temp;
    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }
    while (!temp.empty())
    {
        cout << "(" << temp.top().first << ", " << temp.top().second << ")" << endl;
        s.push(temp.top());
        temp.pop();
    }
}


int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vect;

    for (int i = 0; i < n; i++) {
        int k, l;
        cin >> k >> l;
        vect.push_back(make_pair(k, l));
    }

    pair<int, int> min = *min_element(vect.begin(), vect.end());

    vector<pair<double, int>> angles;
    for (int i = 0; i < n; i++) {
        if (vect[i] != min) {
            double m = atan2(vect[i].second - min.second, vect[i].first - min.first);
            angles.push_back(make_pair(m, i));
        }
    }

    sort(angles.begin(), angles.end(), [](const pair<double, int>& a, const pair<double, int>& b) {
        return a.first < b.first;
    });

    vector<pair<int, int>> sorted;
    sorted.push_back(min);
    for (const auto& angle : angles) {
        sorted.push_back(vect[angle.second]);
    }

    // cout << "Vector after sorting:" << endl;
    // for (const auto& p : sorted) {
    //     cout << p.first << " " << p.second << endl;
    // }

    stack<pair<int,int>> main;
    stack<pair<int,int>>temp;
    for(int i=0;i<sorted.size();i++){
        main.push(make_pair(sorted[i].first,sorted[i].second));
        if(main.size()>=3){
            int area = (sorted[i-1].first-sorted[i-2].first)*(sorted[i].second-sorted[i-2].second)-(sorted[i-1].second-sorted[i-2].second)*(sorted[i].first-sorted[i-2].first);
            if(area>0){
                // cout<<"area 1 "<<area<<endl;
                continue;
            }
            else if (area<0){
                main.pop();
                main.pop();
                sorted.erase(sorted.begin() + (i-1));
                i-=2;
                // cout<<"area 2 "<<area<<endl;

            }
            else{
                temp.push(main.top());
                main.pop();
                main.pop();
                main.push(temp.top());
                temp.pop();
                // sorted.erase(sorted.begin() + (i-1));
                // i-=2;

                // cout<<"area 3 "<<area<<endl;/

            }
        }
    }
    PrintStack(main);
    cout<<"("<<sorted[0].first<<", "<<sorted[0].second<<")"<<endl;
    cout<<"Total Points on Convex Hull: "<<main.size()<<endl;

    return 0; 
}