//Bubble Sort
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int ar[], int n)
{
   
    for(int i=0;i<n-1;i++)
      {
         int flag = 0;
        for(int j=i+1;j<n-i-1;j++)
        {
           
            if(ar[j]<ar[j+1])
            {
                  swap(ar[j],ar[j+1]);
                  flag =1;
            }
        }
      
      if (flag == 0)
      {
        break;
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
    BubbleSort(ar, n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
