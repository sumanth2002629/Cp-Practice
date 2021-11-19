#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<long long int>s;
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int op;
        cin>>op;
        if(op==1) 
        {
            long long int x;
            cin>>x;
            s.push(x);
        }
        else if(op==2) {
            if(!s.empty()) s.pop();
        }    
        else if(op==3) {
            if(!s.empty()) 
                cout<<s.top()<<endl;
            else cout<<"Empty!"<<endl;  ;  
        }
    }
}