#include<bits/stdc++.h>
using namespace std;
 
int fact(int num)
{
 int f=1;
 for(int i=1;i<=num;i++) f*=i;
 return f;
}
int main()
{
 int t;
 cin.sync_with_stdio(false);
 cin >> t;
 while(t--)
 {
  int n,m,one=0,collision=0;
  char a[10][10];
  cin >> n >> m;
  for(int i=0;i<n;i++)
   for(int j=0;j<m;j++) cin >> a[i][j];
   
  for(int i=0;i<m;i++)
  { one=0;
   for(int j=0;j<n;j++) if((a[j][i]-'1')==0) one++;
   collision+=fact(one)/(fact(2)*fact(one-2));
  }
  cout << collision << endl;
 }
 return 0;
}  
