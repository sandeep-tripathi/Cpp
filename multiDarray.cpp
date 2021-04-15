#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout <<"rows,cols:";
    cin>> rows >>cols;

    int** address_table = new int*[rows]; //Dynamic array creation .. ** ==> pointer to pointer
    for(int i = 0; i<rows; i++){
        address_table[i] = new int[cols];  // Elements of 1D array
    }

    address_table[0][2] = 88; // Inserting value to array
    
     cout<< address_table[0][2];   // Displaying inserted value
     
     // Deallocation
    for(int i = 0; i<rows; i++){
       delete[] address_table[i];  // Deallocation of 1D array

    }
    delete address_table; // deallocation of address_table
    address_table = NULL;


    return 0;
}
