#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int ar[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int x;
    cout<<"Enter the number to seach: ";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(x==ar[i])
        {
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}