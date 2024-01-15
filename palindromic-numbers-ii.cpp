#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;
     int cs=1;
     while(t--)
     {
         string s,s1;
         cin>>s;
         s1=s;
         reverse(s1.begin(),s1.end());
           cout<<"Case "<<cs<<": ";
           cs++;
           if(s==s1)
           {
               cout<<"Yes"<<endl;
           }
           else
           {
               cout<<"No"<<endl;
           }


     }
}

