#include <iostream>
using namespace std;

//Function for searching the Element present in Array or not.
void LinearSearch(int a[],int m,int n) {
  int temp = -1;

  for (int i = 0; i <m ; i++) {
    if (a[i] == n) {
      cout << "Element found at position: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }

  if (temp == -1) {
    cout << "No Element Found" << endl;
  }

}

int main() {
  int m,arr[m];//m=array size
  cin>>m;
  //Entering the elements of Array.
  cout << "Please enter " <<m<<"  elements of the Array" << endl;
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }
  //taking input number for  searching.
  cout << "Please enter an element to search" << endl;
  int num;
  cin >> num;
/*Here we are calling the Function which will perform searching 
function and return the index where number is present.
Here we pass Three Arguments first one is array itself second is size of the array and last one is the element
which is to be searched*/
  LinearSearch(arr,m,num);

  return 0;
}
