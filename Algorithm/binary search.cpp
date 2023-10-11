#include<bits/stdc++.h>
using namespace std;
//* Binary Search in INTERACTIVE mode
int BinarySearch(int n, int ar[], int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while(left<=right)
    {
        mid = (left + right) / 2;
        if(ar[mid] == x)
        {
            return mid;
        }
        if(ar[mid]<x)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int x;
    cout<<"Enter the element to be searched:";
    cin>>x;
    
    int result = BinarySearch(n, ar, x);
    if(result == -1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at index "<<result;
    }
    return 0;
}