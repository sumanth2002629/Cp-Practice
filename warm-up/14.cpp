#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sq = ((int)sqrt(n)+1)*((int)sqrt(n)+1);
    int s = sqrt(n);
    if(s*s==n) cout<<4*s<<endl;
    else
    {
        if(n>(sq-(s+1)))
        {
            cout<<4*(s+1)<<endl;
        } 
        else cout<<4*(s+1)-2<<endl;
    }    
}