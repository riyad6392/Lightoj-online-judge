#include<bits/stdc++.h>
using namespace std;
const int N=1006;
int ar[N][N];
typedef pair<int, int> pr;
const int mx=1e3;
pr vt[mx];
bool cmp(pr a,pr b)
{
    if(a.second!=b.second)
    {
        return a.second<b.second;
    }
    return a.first>b.first;

}
void sieve()
{
   for(int i=1;i<=mx;i++)
   {
       vt[i-1].first=i;
       for(int j=i;j<=mx;j+=i)
       {
           vt[j-1].second++;
       }


}
 sort(vt,vt+mx,cmp);
}
int main()
{
    int t,m;
    cin>>t;
    sieve();
   for(int i=1;i<=t;i++)
    {
          cin>>m;
         cout << "Case " << i << ": " << vt[m - 1].first << endl;


    }
    return 0;

}
