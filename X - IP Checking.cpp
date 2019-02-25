#include<bits/stdc++.h>
#define dtb DecimalTobinary
using namespace std ;


int DecimalTobinary(int n)
{
        int a = 1,ans = 0;
        while(n>0)
        {
        ans+=n%2*a;
        a*=10;
        n/=2;
        }
        return ans;

}


int main()
{
    int t,a,b,c,d;
    int e,f,g,h;
        cin>>t;

        for(int i =1; i<=t;i++)
        {
                scanf("%d.%d.%d.%d",&a,&b,&c,&d);
                scanf("%d.%d.%d.%d",&e,&f,&g,&h);

                if(dtb(a)==e && dtb(b)==f && dtb(c)==g && dtb(d)==h)
                cout<<"Case "<<i<<": Yes"<<endl;
                else
                cout<<"Case "<<i<<": No"<<endl;

        }
        return 0;
}
