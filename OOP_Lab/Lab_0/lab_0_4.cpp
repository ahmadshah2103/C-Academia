#include<iostream>
#include<cstdlib>

using namespace std;

int main() {

    int rows, cols;
    cout << "Enter no. of rows: ";
    cin >> rows;
    cout << "Enter no. of columns: ";
    cin >> cols;

    int** matrix = static_cast<int**>(calloc(rows, sizeof(int*)));
    for(int i = 0; i < rows; i++) {
        matrix[i] = static_cast<int*>(calloc(cols, sizeof(int*)));
    }

    cout << "Enter the elements of the matrix: \n";
    for(int i = 0; i < rows; i++) {
        cout << "Enter elements of row no." << i+1 << ": \n";
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int** transpose = static_cast<int**>(calloc(rows, sizeof(int*)));
    for(int i = 0; i < rows; i++) {
        transpose[i] = static_cast<int*>(calloc(cols, sizeof(int*)));
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Original matrix: \n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed matrix: \n";
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}