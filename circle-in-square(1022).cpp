#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pi=acos(-1.0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double n;
        cin>>n;
        double pp=(2*n)*(2*n);
        double qq=n*n;
        double ans=pp-(pi*qq);
        printf("Case %d: %.2lf\n", i, ans);

    }
}

