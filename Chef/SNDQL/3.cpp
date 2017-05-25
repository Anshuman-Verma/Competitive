#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,q,ip,start,ans=0;
		cin >> n >> q;
		
		vector<int> length(n);
		for(int i = 0; i<n; i++)
			cin >> length[i];
			
		sort(length.begin(), length.end());
		
		vector<int>::iterator it;
		
		while(q--){
			ans = 0;
			cin >> ip;
			it = lower_bound(length.begin(), length.end(), ip);
			start = it - length.begin();
			//cout << start << newl;
			
			if(start==0){
				ans = n;
			}
			
			else{
				ans+=n-start;
				//cout << ans << " temp ans" << newl;
				
				int available = start;
				//cout << less << " less" << newl;
				for(int x = start-1; x>0 && available>0; x--){
					if(ip-length[x]<=available-1){
						ans++;
						available -= ip-length[x];
						available--;
					}
					else  break;
				}
			}
			cout << ans << newl;
		}
	}
		
return 0;
}
