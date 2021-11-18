#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=1 && i!=2)
        {
            if((arr[i]%2==1 && arr[(i-1)]%2==1 && arr[(i-2)]%2==1)||(arr[i]%2==0 && arr[(i-1)]%2==0 && arr[(i-2)]%2==0))
            {
                cout<<"";
            }
            else
            {
                cout<<i<<endl;break;
            }
        }
        else if(i==1)
        {
            if((arr[i]%2==1 && arr[(i+1)]%2==0 && arr[(i+2)]%2==0)||(arr[i]%2==0 && arr[(i+1)]%2==1 && arr[(i+2)]%2==1)) 
            {
                cout<<i<<endl;break;
            }    
        }
        else if(i==2)
        {
             if((arr[i]%2==0 && arr[(i+1)]%2==1 && arr[(i-1)]%2==1)||(arr[i]%2==1 && arr[(i+1)]%2==0 && arr[(i-1)]%2==0)) 
             {
                 cout<<i<<endl;break;
             }
             
        }
    }
}