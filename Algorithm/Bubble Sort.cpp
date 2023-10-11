//Bubble Sort
#include<bits/stdc++.h>
using namespace std;

 void bubbleSort(int ar[], int n)
 {
     for(int i=0;i<n-1;i++)
    {
         for(int j=0;j<n-i-1;j++)
         {
             if(ar[j]>ar[j+i])
             {
                int temp=ar[j];
                 ar[j]=ar[j+1];
                 ar[j+1]=temp;
             }
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
