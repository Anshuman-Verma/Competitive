#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long long n, ans;
		int flag = 0;
		cin >> n;
		vector <int> seq(n);		// lol
		vector <bool> check (1e9);		// to check occourance of a number
		
		for(int i  =0; i<n; i++){
			cin >> seq[i];
			if(check[seq[i]]==0)
				check[seq[i]] = 1;
			else{
				flag = 1;
				ans = seq[i];
			}
		}
		
		if(!flag){
			sort(seq.begin(), seq.end());
			(seq[1] == seq[0] + 1) ?  ans = seq[n-1] : ans = seq[0];
		}
		
		
		
		cout << ans << newl;	
	}	
		
	
return 0;
}
