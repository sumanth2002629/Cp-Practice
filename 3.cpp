#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[k+1];
    int seg[n*k+1] = {0};
    for(int i=1;i<=k;i++)
    {
        cin>>a[i];
        seg[a[i]] = 1;
    }
    int count_for_n=0;
    int count = 1;
    for(int i=1;i<=k;i++)
    {
        cout<<a[i]<<" ";count_for_n++;
        while(count_for_n%n!=0) 
        {
            if(seg[count]==0)
            {
                cout<<count<<" ";count++;
                count_for_n++;
            }
            else count++;
        }
        cout<<endl;

    }

}
