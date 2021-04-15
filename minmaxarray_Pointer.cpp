// Return multiple values from a function using pointers


#include <iostream>
using namespace std;

void getMinandMax(int arr[],int size, int* max, int* min){  // Passing multiple argument as pointers
    
     for (int i = 0; i < size; i++) // Same for loop for both max and min
    {
    //Largest element in the array
    if (*(arr+i) > *max)//check if the value stored at array+i is greater than value stored at max
        *max = *(arr+i);
    //Smallest element in the array
    if (*(arr+i) < *min)//check if the value stored at array+i is lesser than value stored at min
        *min = *(arr+i);
    }
}

int main()
{
    int arr[5]= {1,2,3,4,5};
    int min = arr[0];
    int max = arr[0];
    
    getMinandMax(arr,5,&max,&min);  // & is used to pass value by reference
   
    cout<<"Maximum element in the array is "<< max << endl; 
    cout<<"Minimum element in the array is "<< min <<endl;
    return 0;
}
