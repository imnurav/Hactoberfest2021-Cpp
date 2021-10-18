#include <iostream>
#include <iomanip>

using namespace std;

class TriangularArray {
public:
    TriangularArray(int numRows);
    int get(int row, int col) const;
    void set(int row, int col, int value);
private:
    int getIndex(int row, int col) const;

    int n;
    int *data;
};


TriangularArray::TriangularArray(int numRows) {
    n = numRows * (numRows - 1) / 2;
    data = new int[n];
}

int TriangularArray::getIndex(int row, int col) const {
    return row * (row - 1) / 2 + col;
}

int TriangularArray::get(int row, int col) const{
    if(row == col) {
        return 0;
    }

    if(row < col) {
        int tmp = row;
        row = col;
        col = tmp;
    }

    return data[getIndex(row, col)];
}

void TriangularArray::set(int row, int col, int value) {
    data[getIndex(row, col)] = value;
}





int main(void) {
    TriangularArray distance(4);

    distance.set(1, 0, 790);
    distance.set(2, 0, 1745);
    distance.set(2, 1, 2776);
    distance.set(3, 0, 1852);
    distance.set(3, 1, 2564);
    distance.set(3, 2, 381);


    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << setw(10) << distance.get(i, j);
        }
        cout << endl;
    }


    cout << "Distance between B and C: " << distance.get(1, 2) << " mile." << endl;

    return EXIT_SUCCESS;
}
