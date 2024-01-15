#include <bits/stdc++.h>
using namespace std;

vector<int> vt[20009]; // for creating adjacency matrix.
bool vis[20009]= {};
bool colur[20009]= {};

//utility function to reset all data-structures values to zero.
void clr()
{
    memset(vis,false,sizeof (vis));
    memset(colur,false,sizeof (colur));
    for(int i=0; i<20009; i++)
        vt[i].clear();
}

long long int bfs(int x); //this function is implement after the main function

int main()
{
    int n,u,v,m,case_num=1;
    scanf("%d",&n);

    while(n--)
    {
        clr(); //resetting all arrays before starting to process each test case.

        scanf("%d",&m);
        long long int sum=0;

        while(m--)
        {
            scanf("%d %d",&u,&v);
            vt[u].push_back(v);
            vt[v].push_back(u);
        }

        for(int i=0; i<20009; i++)
        {
            if(vis[i]==0 && !vt[i].empty())
            {
                sum+=bfs(i);
            }
        }
        cout<<"Case "<<case_num++<<": "<<sum<<'\n';
    }
    return 0;
}
long long int bfs(int x)
{
    long long int l_num=0,v_num=0;
    queue<int>q;

    q.push(x);
    vis[x]=1;
    colur[x]=1;
    ++l_num;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<vt[u].size(); i++)
        {
            int v = vt[u][i];
            if(vis[v]==0)
            {
                q.push(v);
                vis[v]=1;

                if(colur[u]==1) //assigning type to each node.
                {
                    colur[v] = 0;
                    ++v_num;
                }
                else
                {
                    colur[v] = 1;
                    ++l_num;
                }
            }
        }
    }

    long long int mx = max(v_num,l_num);

    return mx;
}
