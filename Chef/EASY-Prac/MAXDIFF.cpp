#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long t,n,k,i,j,a[105],child,father;
	cin>>t;
	while(t--)
    {
        cin>>n>>k;
        i=0,child=0,father=0;
        while(i<n)
            cin>>a[i++];
        sort(a,a+n);
        if(k<=n/2)
        {
            for(i=0;i<k;i++)
            child+=a[i];
            for(i=k;i<n;i++)
            father+=a[i];
        }
        else
        {
          for(i=0;i<n-k;i++)
            child+=a[i];
            for(i=n-k;i<n;i++)
                father+=a[i];
        }
 
        cout<<father-child<<endl;
    }
    return 0;
}
 
