#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<< "Size:";
    cin >> size; // User input

    // int arr[size];
    int* arr = new int[size]; //Dynamic array...'new' keyword allocated memory
    

    //Read array
    for (int i=0; i<size;i++){
        cout<<"Array["<< i <<"]"<<":";
        cin >> arr[i];
    }
   //Display array
   for (int i=0; i<size;i++){
       //Line 22 & 23 are two ways to dereference array as array name is pointer to first address of an array
       // cout<<arr[i] << "  ";
       cout<<*(arr)+i << "  "; //L22 & L23 same
   }
   delete[] arr; // Deallocate array
   arr = NULL; // So array will not point to any random address

    return 0;
}
