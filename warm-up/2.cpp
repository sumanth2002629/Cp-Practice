#include <iostream>
using namespace std;
int main()
{
    int n,m,i=1;
    cin>>n>>m;
    int tot = n;
    while(tot>0) 
    {
        if(i%m==0) tot++;
        i++;tot--;
    }
    cout<<i-1<<endl;
}