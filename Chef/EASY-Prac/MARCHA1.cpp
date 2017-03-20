#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin  >> t;
	while(t--){
		int n,m,found = 0;
		cin >> n >> m;
		vector<int> notes(n+1);
		vector<int> sum(pow(2,n));
		sum[0] = 0;
		for(int i= 0; i<n; i++)
			cin >> notes[i];
		
		// input ends 
		
		int top = 0, flag  = 0;
		for(int i = 0; i<n; i++){
			for(int j = 0; j<=flag && !found ; j++){
				top++;
				sum[top] = notes[i] + sum[j];
				if(sum[top]==m)
					found = 1;
			}
			flag  = top;
		}
		found ? cout << "Yes" : cout << "No";
		cout << newl;	
		
	}	
		
	
return 0;
}
