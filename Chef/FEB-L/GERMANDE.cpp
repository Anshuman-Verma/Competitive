#include<bits/stdc++.h>
#include<bitset>
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int o1,o2,i;
		cin >> o1 >> o2;
		const int size = 2*o1*o2;
		
		int r[size];
		for(i = 0; i<size/2; i++){
			cin >> r[i];
			r[(size)/2+i] = r[i];
		}
		
	// --END OF INPUTS--
	
		int flag = 0,start = 0;
		
		for(int j = 0; j<(size)/2; j++){
			if(r[j]==1)
				ones++;
		}
	
	
	
	
		
	}
	
		
		
	}
	
return 0;
}
