#include<bits/stdc++.h>

using namespace std ;

int main()
{
    double b,s;
    int cnt=1;
    while(cin>>b>>s){
        if(b==0 && s==0)
            break;

        if( b-1==0){
            cout<<"Case "<<cnt<<": "<<":-\\\n";
            cnt++;
        }

        else{
        double x,y;
        double z = 1.0;
        x = min(z,s/b);
        y =  min(z,(s-1)/(b-1));

        //cout<<x<<" "<<y<<endl;
        if(x == y)
            cout<<"Case "<<cnt<<": "<<":-|"<<endl;
        else if(x>y)
            cout<<"Case "<<cnt<<": "<<":-("<<endl;
        else if(x<y)
            cout<<"Case "<<cnt<<": "<<":-)"<<endl;
        cnt++;

    }


    }


    return 0;
}




