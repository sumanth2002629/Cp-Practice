#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    if(s<abs(a)+abs(b)) cout<<"No"<<endl;
    else if(s>=abs(a)+abs(b))
    {
        if((s-abs(a)-abs(b))%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}