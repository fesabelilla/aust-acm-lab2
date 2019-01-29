#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i = 1 ; i<=t ; i++){
        int x1,y1,x2,y2;

        cin>>x1>>y1>>x2>>y2;

        int n;
        cin>>n;

        for(int j = 0; j<n ; j++){

            int x,y;
            cin>>x>>y;
        if(j==0)
              cout<<"Case "<<i<<":"<<endl;
            if(x<x1 ||y<y1 ||x>x2 || y>y2){
                cout<<"No"<<endl;
            }
            else cout<<"Yes"<<endl;

        }
}

  return 0;
}
