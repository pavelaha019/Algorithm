#include<bits/stdc++.h>
 using namespace std;

 void bubbleSort(int arr[], int n){
   
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
 
}


 int main()
 {
     int n;
     cout<<"Enter the size of the array: ";
     cin>>n;
     int arr[n];
     cout<<"Enter the elements of the array: ";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     bubbleSort(arr, n);
     cout<<"Sorted array: ";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     return 0;
 }
