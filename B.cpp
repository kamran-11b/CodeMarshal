#include<bits/stdc++.h>
using namespace std;
#define   ll   long long
#define   mx   100005


int main()
{

    int n;
    cin>>n;

    int a=0,b=0,c=0,d=0;
    a=n/10;
    n%=10;
    b=n/5;
    n%=5;
    c=n/2;
    n%=2;
    cout<<"Number of the notes : "<<n+a+b+c<<endl;
    cout<<10<<" : "<<a<<endl;
    cout<<5<<" : "<<b<<endl;
    cout<<2<<" : "<<c<<endl;
    cout<<1<<" : "<<n<<endl;


}
