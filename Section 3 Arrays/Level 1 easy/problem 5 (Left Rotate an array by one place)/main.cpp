#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Orginal array : ";
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    // create a temp array 
    int temp[7];
    for(int i = 1;i<n;i++)
    {
        temp[i-1] = arr[i];
    }
    
    temp[n-1] = arr[0];

    cout << "\nAfter shifting left by one place : ";
    for(int i = 0;i<n;i++)
    {
        cout << temp[i] << " ";
    }
}