#include<bits/stdc++.h>

using namespace std ;


int main()
{
    map<char,int>mp;

    for(int i = 0 ; i<52 ; i++)
    {
        if(i>=0 && i<26)
        {
            char c = 'a'+i;
            // cout<<c<<endl;
            mp[c] = i+1;
             //cout<<c<<" "<<i+1<<endl;
        }

        else
        {
            char c = 'A'+i-26;
            //cout<<c<<endl;
            mp[c] = i+1;
            //cout<<c<<" "<<i+1<<endl;

        }

    }

    string s;

    while(cin>>s)
    {
        int sum  = 0;
        char ch[21];
        strcpy(ch,s.c_str());

        for(int i = 0 ; i < s.size() ; i++)
        {
            sum = sum + mp[ch[i]];
        }
      // cout<<sum<<endl;
        bool flag = true;
        for(int i = 2 ; i*i<=sum ; i++)
        {
            if(sum%i==0)
            {
                flag = false;
                break;
            }
        }
        if(flag==true || sum == 1)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }



    return 0;
}
