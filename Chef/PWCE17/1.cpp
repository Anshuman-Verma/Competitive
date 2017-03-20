#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,k,req,i;
		cin >> n >> k;
		vector<int> val(n);
		for(i = 0; i<n; i++)
			cin >> val[i];
		req = val[k-1];
		
		sort(val.begin(), val.end());
		i = 0;
		while(val[i]!=req){
			i++;
		}
		cout << i+1 << newl;
		
	}		
		
	
return 0;
}
