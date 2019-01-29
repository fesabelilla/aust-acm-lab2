#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,cnt = 0,pntr = 0;

    cin>>n;

    long arr1[n];
    long arr2[n];

    for(long i = 1 ; i<=n ; i++ )
    {
        int k;
        cin>>k;
        arr1[k] = i;
    }
    for(long i = 1 ; i<=n ; i++ )
    {
        cin>>arr2[i];
    }
    for(long i = 1 ; i<=n ; i++){
           pntr = cnt;
        cnt = arr1[arr2[i]] - cnt ;

        if(cnt<=0){
            cout<<"0"<<" ";
            cnt = pntr;
        }
        else{
            cout<<cnt<<" ";
            cnt = arr1[arr2[i]];
        }
    }


    return 0;
}

