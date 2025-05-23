#include<bits/stdc++.h>
using namespace std;

int power(int a,int pow)
{
    if(pow==1)
        return a;
    return a*power(a,pow-1);
}
int main()
{
    
    int a;
    cin>>a;
    
    int pow;
    cin>>pow;
    
    cout<<power(a,pow);
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    int target;
    cin>>target;
    int count=0;
    cout<<frequency(arr,n,target,count);*/
    
    return 0;
}
