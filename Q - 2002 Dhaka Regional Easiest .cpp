//floor((x+.5)logx−0.4343x+1.4)
// long b =floor((a+.5)*log10(a)-0.4343*a+1.4);

//for n>10^6
//b = floor(n* log10(( n/ e)) + log10(2*pi*n)/2)+1;

#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;

    for(int i = 1; i<=t ; i++){
        long a;
        cin>>a;
        if(a==1)
            cout<<1<<endl;
        else{
       long b = floor(a*log10(a/M_E)+log10(2*M_PI*a)/2.0)+1;
        cout<<b<<endl;
    }
    }
    return 0;
}




