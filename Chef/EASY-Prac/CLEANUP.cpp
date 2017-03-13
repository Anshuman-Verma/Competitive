#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >>t;
	while(t--){
		int n,m,ip,assign = 0;
		cin >> n >> m;
		vector<bool> iscompleted(n+1);
		vector<int> chefj (n/2 +1);
		vector<int> assj (n/2 +1);

		for(int i = 1; i<=m; i++){
			cin >> ip;
			iscompleted[ip] = true;
		}
		
		
		
		int itc =0, ita= 0;
		for(int i = 1; i<=n; i++){
			if(!iscompleted[i]){
				if(assign){
					assj[ita] = i;
					ita++;
					assign = 0;
				}
				
				else {
					chefj[itc] = i;
					itc++;
					assign = 1;
				}
			}
		}
		
		for(int i = 0; i<n/2+1; i++)
			if(chefj[i])cout << chefj[i] << " ";
		cout << newl;
		
		for(int i = 0; i<n/2+1; i++)
			if(assj[i])cout << assj[i] << " ";
		cout << newl;
		
	}	
		
	
return 0;
}
