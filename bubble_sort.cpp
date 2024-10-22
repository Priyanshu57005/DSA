#include<iostream>
using namespace std;

int main(){

    int arr[1000];
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the element in array:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=n-2;i>=0;i--)
    {
        bool swapped = 0;
        for(int j=0; j<=1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

}