#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	

		int n,i;
		cin >> n;

		vector<bool> is_reported(n);
		
		for(i = 0; i<is_reported.size(); i++){
			int temp;
			cin >> temp;
			
			if(temp!=0)
				is_reported[temp-1] = 1; 	
		}
		
		for(i = 0; i<is_reported.size(); i++)
			if(!is_reported[i])
				cout << i+1 << " ";
		
		cout << "\n";
		
	
return 0;
}
