#include<bits/stdc++.h>
using namespace std;
#define   ll   long long
#define   mx   100005

int main()
{
    int t,f=1;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        int m=0;
        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {
                int k=(r-i)*(r-i)+(c-j)*(c-j);
                if(k==5)m++;
            }
        }
        cout<<"Case "<<f++<<": "<<m<<endl;
    }
}

