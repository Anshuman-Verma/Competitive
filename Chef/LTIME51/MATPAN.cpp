#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--) {
		int price = 0;
		vector<bool> presense(26);
		vector<int> cost(26);
		for(int i = 0; i<26 ; i++ ){
			cin >> cost[i];
		}
		string a;
		cin >> a;
		for(int i =0; i < a.length() ; i++){
			int x = a[i];
			presense[x-97] = true;
		}

		for(int i =0; i<26 ; i++){
			if(!presense[i]){
				price += cost[i];
			}
		}
		cout << price << newl;
	}

return 0;
}

