#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;
		vector<int> song(n);
		for(int i = 0;  i<n; i++)
			cin >> song[i];
		cin >> k;
		int search = song[k-1], ans;
		// end of input
		sort(song.begin(), song.end());
		for(int i =0 ; i<song.size(); i++)
			if(song[i]==search){
				ans = i+1;
				break;
			}
		cout << ans << newl;
	}		
	
return 0;
}
