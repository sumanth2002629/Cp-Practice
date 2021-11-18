#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int valid[s.length()+1]={0};
    unordered_map<string, int> umap;
    for(int i=1;i<=s.length();i++)
    {
        int j=0;
        while(i+j!=s.length()+1)
        {
            if(j==0)
            {
                if(umap[s.substr(j,i)]==0)
                {
                    umap[s.substr(j,i)]++;
                    j++;
                } 
                else
                {
                    valid[i] = 1;
                    break;
                } 
            }
            else
            {
                if(umap[s.substr(j,i)]==0)
                {
                    umap[s.substr(j,i)]++;
                    j++;
                } 
                else
                {
                    valid[i] = 1;
                    break;
                } 
            }
        }
    }
    int j;
    for( j=s.length();j>=1;j--)
    {
        if(valid[j]==1)
        {
            cout<<j<<endl;break;
        }    
    }
    if(j==0) cout<<0<<endl;
}