#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;


    int n,cnt=1;
    while(cin>>n){
        if(n==0)
            break;
        int arr[n+1],a=0,b=0;
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
            if(arr[i]>0){
                a++;
            }
            else
                b++;
        }
        cout<<"Case "<<cnt<<": "<<(a-b)<<endl;
        cnt++;
    }
    return 0;
}


