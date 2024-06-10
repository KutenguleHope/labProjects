#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    cout << "Enter the number of columns (max 3): ";
    cin >> cols;

    
    if (rows > 3 || cols > 3 || rows < 1 || cols < 1) {
        cout << "Dimensions must be between 1 and 3. Please restart the program." << endl;
        return 1;
    }

    
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) 
    {
        array[i] = new int[cols];
    }

    
    for (int i = 0; i < rows; ++i)
     {
        for (int j = 0; j < cols; ++j) 
        {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    
    cout << "The 2D array contains:" << endl;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;    
         }

    
    for (int i = 0; i < rows; ++i) 
    {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
