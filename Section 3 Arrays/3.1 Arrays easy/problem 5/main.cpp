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

    // // approach 1 using temp array
    // // create a temp array 
    // int temp[7];
    // for(int i = 1;i<n;i++)
    // {
    //     temp[i-1] = arr[i];
    // }
    
    // temp[n-1] = arr[0];

    // cout << "\nAfter shifting left by one place : ";
    // for(int i = 0;i<n;i++)
    // {
    //     cout << temp[i] << " ";
    // }


    

    // approach 2 without extra array
    int temp = arr[0];// temp = 1
    for(int i = 0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp;

    cout << "\nAfter shifting left by one place : ";
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}