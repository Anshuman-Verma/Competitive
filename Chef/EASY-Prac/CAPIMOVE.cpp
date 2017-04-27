#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 111123456789
#define pb push_back
#define mp make_pair
 
typedef pair<int,int> pii;
 
///CAPIMOVE
bool comp(pii i,pii j)
{
    return (i.second<j.second);
}
int A[50010],ans[50010];
pii B[50010];
vector<int> V[50010];
int main()
{
    ///freopen("in.txt","r",stdin);
    int t;scanf("%d",&t);
    while(t--)
    {
        int n,x,y;scanf("%d",&n);
        B[0]=mp(0,-1);
        for(int i=1;i<=n;i++) {scanf("%d",&A[i]);B[i]=(mp(i,A[i]));V[i].pb(i);}
        sort(B+1,B+n+1,comp);
        for(int i=1;i<=n;i++) ans[i]=B[n].first;
        for(int i=1;i<n;i++)
        {
            scanf("%d%d",&x,&y);V[x].pb(y);V[y].pb(x);
        }
        for(int i=n;i>0;i--)
        {
            int l=B[i].first;
            for(int j=0;j<V[l].size();j++)
            {
                int k=V[l][j];
                if(ans[k]==l) ans[k]=B[i-1].first;
            }
        }
        for(int i=1;i<=n;i++) V[i].clear();
        for(int i=1;i<=n;i++) if(i<n) printf("%d ",ans[i]); else printf("%d\n",ans[i]);
    }
}
 
