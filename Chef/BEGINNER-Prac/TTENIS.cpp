#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		string stats;
		cin >> stats;
		int chefpt = 0, oppt = 0, flag = 0;
		
		for(int i = 0; i<stats.length();  i++){
			
			if(stats[i] == '1')
				chefpt++;
			else 
				oppt++;
			
			if(chefpt>=11 && (chefpt-oppt)>=2){
				flag = 1;
				break;
			}
			
		}
		
		flag ? cout << "WIN" : cout << "LOSE";
		cout << newl;
	}	
		
	
return 0;
}
