#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,m, u,v;
		cin >> n >> m;
		vector<int> degree(n);
		
		for(int i = 0; i<m; i++){
			cin >> u >> v;
			degree[u-1]++;
			degree[v-1]++;
		}
		
		/*for(int i = 0; i<n; i++)
			cout << degree[i] << newl;*/
		
		for(int d = 0; d<n; d++){
			int extra = 0;
			
			for(int i = 0; i<n; i++){
				if(degree[i] <= d)
					extra++;
				else if(degree[i]==0)
					extra++;
			}
			if(extra==n)
				extra--;
			cout << extra;
			if(d!=n-1)
				cout << " ";
		}
		cout << newl;
	}		
		
		
	
return 0;
}
