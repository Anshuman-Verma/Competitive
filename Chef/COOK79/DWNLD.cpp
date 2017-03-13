#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int tc;
	cin >> tc;
	while(tc--){
		int n,k,i,zero = 0;
		cin >> n >> k;
		if(k==0)zero = 1;
		int time[n], data[n],once = 1,location=0;
		int ans = 0;
		
		for(int i = 0; i<n; i++){
			
			cin >> time[i] >> data[i];
			
			if(k>0)
				k-=time[i];
			
			if(once && k<0){
				ans += abs(k)*data[i];
				location =+ i;
				once = 0;
			}
			
			else if(once && k==0){
				location+=i;
				once = 0;
			}
			
			
		}
		if(zero)location--;
		
		for(int i = location+1; i<n; i++)
			ans += time[i]*data[i];
		
		cout << ans << newl;
		
	}
	
return 0;
}
