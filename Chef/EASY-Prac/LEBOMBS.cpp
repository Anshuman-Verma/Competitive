#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n, count = 0;
		string s;
		cin >> n >> s;
		vector<bool> isSet(n);
		for(int i = 0; i<n; i++){
			if(!i && s[i]=='1'){
				isSet[i] = true;
				isSet[i+1] = true;
			}
			
			else if(i==n-1 && s[i]=='1'){
				isSet[i] = true;
				isSet[i-1] = true;
			}
				
			else if(s[i]=='1'){
				isSet[i-1] = true;
				isSet[i] = true;
				isSet[i+1] = true;
			}
		}
		for(int i  = 0; i<n; i++)
			if(!isSet[i])
				count++;
		
		cout << count <<  newl;
	}		
		
	
return 0;
}
