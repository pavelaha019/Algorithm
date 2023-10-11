//SELECTION SORT
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int ar[], int n)
{
    int in,temp;
    for(int i=0;i<n-1;i++)
      {
         in = i;
        for(int j=i+1;j<n;j++)
        {
           
            if(ar[j]<ar[in])
            {
                in =j;
            }
        }
        if(in!=1 )
        {
            temp = ar[i];
            ar[i] = ar[in];
            ar[in] = temp;

        }
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
    bubbleSort(ar, n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}