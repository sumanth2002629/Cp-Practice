#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char,int>umap;
    umap['Q']=9;
    umap['q']=9;
    umap['R']=5;
    umap['r']=5;
    umap['B']=3;
    umap['b']=3;
    umap['N']=3;
    umap['n']=3;
    umap['P']=1;
    umap['p']=1;
    umap['K']=0;
    umap['k']=0;
    umap['.']=0;
    int white = 0;
    int black = 0;
    for(int i=0;i<8;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<8;j++)
        {
            if(s[j]>=65 && s[j]<=90) white+=umap[s[j]];
            else if (s[j]>=97 && s[j]<=122) black+=umap[s[j]];
        }

    }
    if(black>white) cout<<"Black"<<endl;
    else if(white>black) cout<<"White"<<endl;
    else cout<<"Draw"<<endl;

}
