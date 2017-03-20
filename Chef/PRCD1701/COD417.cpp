#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n, ans=0;
		cin >> n;
		vector<int> player(n);
		vector<int> count(1e6+1);
		for(int i = 0; i<n; i++){
			cin >> player[i];
			count[player[i]]++;
		}
		
		for(int i = 0; i<count.size(); i++)
			if(count[i]>1)
				ans+=count[i];
		
		cout << ans << newl;
	}		
		
	
return 0;
}
