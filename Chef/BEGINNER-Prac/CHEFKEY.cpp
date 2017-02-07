#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
		int t;
		cin >> t;
		
		while(t--){
			int h,w,k;
			cin >> h >> w >> k;
			
			int count = 0;
			
			for(int i = 1; i<=h; i++){
				if(k%i==0){
					if(k/i<=w)
						count++;				
				}	
			}
			
			cout << count << endl;
		}

return 0;
}
