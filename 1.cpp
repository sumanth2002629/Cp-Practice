#include <iostream>
using namespace std;
int main()
{
    int n,x,y,i;
    cin>>n;
    int arr[n]={0};
    cin>>x;
    for(i=0;i<x;i++)
    {
        int temp;
        cin>>temp;
        arr[temp-1] = 1;
    }
    cin>>y;
    for(i=0;i<y;i++)
    {
        int temp;
        cin>>temp;
        arr[temp-1] = 1;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0) {
        cout<<"Oh, my keyboard!"<<endl;break;
        }
    }
    if(i==n) cout<<"I become the guy."<<endl;

}