//Implementing radix sort using bucket sort  technique.
/*
Input:

573, 25, 415, 12, 161, 6

Output:

6 12 25 161 415 573 

*/

#include <bits/stdc++.h>
using namespace std;
 
// structure for a single linked list to help further in sorting

struct node {
    int data;
    node* next;
};
 
// function to create a new node in linkedlist
struct node* create(int x)
{
    node* temp = new node();
    temp->data = x;
    temp->next = NULL;
 
    return temp;
}
 
//  function to append node in the linked list

void insert(node*& head, int n)
{
    if (head == NULL) {
        head = create(n);
        return;
    }
 
    node* t = head;
    while (t->next != NULL)
        t = t->next;
    t->next = create(n);
}
 
//  function to pop an element from front in the list

int del(node*& head)
{
    if (head == NULL)
        return 0;
    node* temp = head;
    int val = head->data;
    head = head->next;
 
    delete temp;
    return val;
}
 

int digits(int n)
{
    int i = 1;
    if (n < 10)
        return 1;
 
    while (n > (int)pow(10, i))
        i++;
    return i;
}
 
void radixSort(vector<int>& arr)
{
    
    int sz = arr.size();
 

    int max_val = *max_element(arr.begin(), arr.end());
 
    // storing the max element
    int d = digits(max_val);
 
    // creating buckets to store the pointers
    node** bukets;
 //array of pointers to linkes list of size 10 as integers are decimal numbers so can hold values from 0 to 9.
    
    bukets = new node*[10];
 
    
    for (int i = 0; i < 10; i++)
        bukets[i] = NULL;
 
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < sz; j++) // bukets updation
            insert(bukets[(arr[j] / (int)pow(10, i)) % 10],
                   arr[j]);
 
        int x = 0, y = 0;
        
 
        while (x < 10) {
            while (bukets[x] != NULL)
                arr[y++] = del(bukets[x]);
            x++;
        }
    }
}
 
// function to print the sorted array
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
int main()
{
    vector<int> arr = { 573, 25, 415, 12, 161, 6 };
 
    // function call
    radixSort(arr);
    print(arr);
 
    return 0;
}