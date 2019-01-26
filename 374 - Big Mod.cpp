#include<bits/stdc++.h>
using namespace std;

int mod(long b, long p, long m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
        return (mod(b,p/2,m)*mod(b,p/2,m))%m;
    return (mod(b,p-1,m)*(b%m))%m;
}
int main()
{
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)==3)
    {
        cout<<mod(b,p,m)<<endl;
    }
    return 0;
}
