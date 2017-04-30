#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		string s;
		int flag = 1, onefound=0,temp = 0,oneafter=0;
		cin >> s;
		
		for(int i =0; i<s.length(); i++){
			if(s[i]=='1' && !temp){
				onefound = 1;
				temp = 1;
			}
			
			else if(onefound && s[i]=='0')
				oneafter=1;
			
			else if(oneafter && s[i]=='1')
				flag = 0;
			
			
		}
	
	(flag == 1 && onefound) ? cout << "YES" : cout << "NO";
	cout << newl;	
	
	}		
		
		
	
return 0;
}
