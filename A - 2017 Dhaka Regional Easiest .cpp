#include<bits/stdc++.h>

using namespace std ;

bool checkYear(int year)
{
    if (year % 400 == 0)
        return true;

    if (year % 100 == 0)
        return false;

    if (year % 4 == 0)
        return true;
    return false;

}
int main()
{
    int t,d,m,y1,y2;

    cin>>t;

    for(int i = 1 ; i<=t ; i++)
    {
        cin>>d>>m>>y1>>y2;
        int a = y1;
        if(m!=2)
        {
            cout<<"Case "<<i<<": "<<y2-y1<<endl;
        }
        else if(m==2 && d!=29){
            cout<<"Case "<<i<<": "<<y2-y1<<endl;
        }
        else if(m==2 && d== 29)
        {
            int cnt = 0;
            for(int j = y1+1 ; j<=y2 ; j++)
            {
                    if(checkYear(j)==true)
                    {
                        cnt++;
                    }

            }
            cout<<"Case "<<i<<": "<<cnt<<endl;

        }
    }


    return 0;
}
