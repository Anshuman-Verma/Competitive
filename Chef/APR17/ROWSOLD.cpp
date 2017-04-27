#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin  >> t;
	while(t--){
		string ip;
		long long chunk = 0, leadzero=0;
		unsigned long long ans = 0;
		cin >> ip;
		int cur = ip[0]-48;
		for(int i = 0; i<ip.length(); i++){
			
			if(ip[i]=='0'){
				leadzero++;
				cur = 0;
			}
			else if(ip[i]=='1' && cur==1)
				chunk++;
			else if(ip[i]=='1'&& cur==0){
				ans += (leadzero+1)*chunk;
				cur = 1;
				chunk++;
				leadzero = 0;
			}
			if(i==ip.length()-1 && ip[i]=='0'){
				ans+=(leadzero+1)*chunk;
			}	
		}
		cout << ans << newl;
	}	
		
		
	
return 0;
}
