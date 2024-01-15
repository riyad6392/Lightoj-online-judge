#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        cin>>n;
        int mxbana[2*n][n];
        int bana[2*n][n];
        memset(mxbana,0,sizeof(mxbana));
        memset(bana,0,sizeof(bana));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cin>>bana[i][j];
            }
        }
        int pos=1;
        for(int i=n;i<(2*n)-1;i++)
        {
            for(int j=pos;j<n;j++)
            {
                cin>>bana[i][j];
            }
            pos++;
        }
        mxbana[0][0]=bana[0][0];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                {
                    mxbana[i][j]=mxbana[i-1][j]+bana[i][j];
                }
                else
                {
                  mxbana[i][j]=max(mxbana[i-1][j-1],mxbana[i-1][j])+bana[i][j];

                }
            }

        }
        int pp=1;
        for(int i=n;i<(2*n)-1;i++)
        {
           for(int j=pp;j<n;j++)
           {
               mxbana[i][j]=max(mxbana[i-1][j-1],mxbana[i-1][j])+bana[i][j];
           }
           pp++;

        }

     cout<<"Case "<<tt<<": "<<mxbana[(2*n)-2][n-1]<<endl;



    }
}

