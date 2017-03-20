#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

	int t;
	cin >> t;
	while(t--){
		int n, ans = 0, min = 1e9;
		cin >> n;
		vector<signed int> speed(n+1);
		for(int i =0; i<n; i++){
			cin >> speed[i];
			
			if(i==0){
				ans++;
				min = speed[0];
			}
			else if(i!=0)
				if(speed[i] < min){
					ans++;
					min = speed[i];
				}
		}
	
		cout << ans << newl;	
		
	}	
		
	
return 0;
}
