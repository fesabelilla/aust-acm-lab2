#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,arr[20],k = 1,ans,a;

    while(scanf("%lld",&n)== 1)
    {
        ans = 0;

        for(int i = 0 ; i<n ; i++)
            cin>>arr[i];

        for(int i = 0 ; i<n ; i++){
                 a = 1;
            for(int j = i ; j<n && a; j++){
                a = a*arr[j];
                if(a>ans)
                    ans = a;
            }
        }
        cout<<"Case #"<<k++<<":"<<" The maximum product is "<<ans<<"."<<endl<<endl;

    }


    return 0;
}


