#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while(t--) {
		bool ans = true;
		int n, r, left = 1e9, right = 0;
		cin >> n >> r;
		vector<int> val(n);
		for(int i = 0; i<n; i++){
			cin >> val[i];
			right = max(val[i], right);
			left = min(val[i], left);
		}
		
		//if(val[n-1] != r)ans = false;

		for(int i = 0; i<n-1; i++) {
			if(r < val[i]) {
				if(val[i] <= right)right = val[i];
				else ans = false;
			}
			else if(r > val[i]) {
				if(val[i] >= left)left = val[i];
				else ans = false;
			}
		}

		ans ? cout << "YES" : cout << "NO";
		cout << newl;

	}

return 0;
}
