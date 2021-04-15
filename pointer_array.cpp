#include <iostream>

using namespace std;

int main()
{
 /*   int number[5] = {1,2,3,4,5};
  // Array name is pointer to first element
    cout<<number<<endl;
    cout<< &number[0] << endl; // L9 & L10 are same
    // Accessing array value
    cout<<number[0]<<endl;
    cout<<*(number+ 0)<<endl; // L12 &L13 are same  
    */
    
// Inputting array element using for loop
 
 int amount[5];
 for(int i=0;i<=4;i++){
     cout<<"Enter five elements:";
     cin>> amount[i];
 }
 
// Filling inputted array
for(int i=0;i<=4;i++){
     cout<<amount[i]<< " ";
     //Alternate to L25 
    // cout<<*(amount + i)<< " ";  
}

    return 0;
}

