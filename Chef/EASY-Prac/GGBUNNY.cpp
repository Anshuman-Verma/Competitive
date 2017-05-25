#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cmath>

#define MAX 1e18
using namespace std;

int main()
{
  int t,n,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    vector<long long> power;
    long long num=1,ans=0;
    //store all the powers of k in this array till end.
    power.push_back(1);
    for(int i=1; ;i++)
    {
      num*=k;
      if(num>MAX || num<0 ) break;
      power.push_back(num);
      //cerr<<num<<" ";
    }
    //cerr<<endl;
    //aceept n inputs.
    for(int i=0;i<n;i++)
    {
      cin>>num;
      if(binary_search(power.begin(),power.end(),num))
        ans++;
    }
    cout<<ans<<endl;
  }


}
