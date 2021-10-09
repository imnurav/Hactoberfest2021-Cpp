#include <iostream>
using namespace std;

int main() {
   int arr[10][10], transpose[10][10], row, column, i, j;

   cout << "Enter number of rows and columns of matrix: ";
   cin >> row >> column;

   cout << "\nEnter elements of matrix: " << endl;

   // Store the matrix elements
   for (int i = 0; i < row; ++i) 
   {
      for (int j = 0; j < column; ++j) 
      {
         cout << "Enter element, a" << i + 1 << j + 1 << ": ";    //print as a11,a12,etc.
         cin >> arr[i][j];
      }
   }

   // Printing the matrix taken as input
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << arr[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }

   // find out transpose of the matrix
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = arr[i][j];
      }

   // Printing the transpose matrix
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}
