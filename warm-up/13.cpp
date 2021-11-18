#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int b;
    cin>>b;
    int count = 0;
    while(b>0) {
        if(b%2 == 1) { count++;}
        b =b/2;
    }
    cout<<count<<endl;
}