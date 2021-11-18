#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a*c-b*c)%b==0)
        cout<<((a*c-b*c)/b)<<endl;
    else
        cout<<((a*c-b*c)/b)+1<<endl; 
}