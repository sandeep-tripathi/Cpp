//Pointer
#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    cout<< &n << endl;   // & is address of variable operator

    //POINTER
    int* ptr = &n;  // integer Pointer 'ptr' stores address of the variable n or points to n 
    cout<< "Pointer address:" << &n << endl;
    cout<< "Pointer address:" << ptr << endl;   // Line 13 & 14 are same

    //Value of the pointer
    cout<< "Pointer value:" << *ptr << endl;  // Derefrencing the pointer..READ * as value of when infront of pointer variable

    // Changing value of variable using pointer
    *ptr = 10;
    cout<< "Pointer value after change:" << *ptr << endl;
    cout<< "Pointer address:" << n << endl;      // Both n and *ptr has changed value


    return 0;
}
