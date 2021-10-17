#include <bits/stdc++.h>
using namespace std;

// driver code
int main()
{
    int arr[10];
    cout<<"Enter 10 numbers: \n";
    for(int i=0;i<10;i++)
        cin>>arr[i];
    int ans;
    for(int i=0;i<10;i++)
        ans+=arr[i];
    cout<< "Sum is: "<<ans<<endl;
    cout<< "Average is: "<< ans/10.0<<endl;
    return 0;
}