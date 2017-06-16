#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,prev,count=1,flag = 0;
		cin >> n;
		vector<int> can(n);
		for(int i = 0; i<n; i++){
			cin >> can[i];
			if(i>0){
				prev = can[i-1];
			}
			if(can[i]==prev)
				count++;
			else count=1;
			if(count==3)
				flag = 1;
			
			//cout << count << newl;	
		}
		
		flag ? cout << "Yes" : cout << "No";
		cout << newl;
		
	}		
		
		
	
return 0;
}
