#include<bits/stdc++.h>

#define newl "\n"

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
		int t;
		cin >> t;
		while(t--){
			int p,q,r;
			cin >> p >> q >> r;
			long long a[p],b[q],c[r];
			for(int i = 0 ; i<p; i++)
				cin >> a[i];	
			for(int i = 0 ; i<q; i++)
				cin >> b[i];	
			for(int i = 0 ; i<r; i++)
				cin >> c[i];
				
				
			unsigned long long sum = 0;
			for(int x = 0;  x<p; x++)
				for(int y = 0; y<q; y++)
					for(int z = 0; z<r; z++){
						if(a[x]>b[y] || c[z]>b[y])
							continue;	
						else sum += ((a[x]+b[y])*(c[z]+b[y]))%1000000007;	
						}
			
			cout << sum%1000000007 << newl;
		}
		
		
	
return 0;
}
