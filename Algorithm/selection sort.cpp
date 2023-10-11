//SELECTION SORT
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int ar[], int n)
{
    int min;
    for(int i=0;i<n-2;i++)
      {
         min = i;
        for(int j=i+1;j<n-1;j++)
        {
           
            if(ar[j]<ar[min])
            {
                min =j;
            }
        }
       swap(ar[min],ar[i]);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    selectionSort(ar, n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
