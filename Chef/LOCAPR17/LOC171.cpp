#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long long n,count=0;
		cin >> n;
		vector<int> height(n),cons(n);
		cons[0] = 1;
		for(int i =0; i<n; i++){
			cin >> height[i];
			if(i>0){
				if(height[i]==height[i-1])
					cons[i] = cons[i-1]+1;
				else
					cons[i] = 1;
			}
			if(cons[i]>1)
				count+=cons[i]-1;	
		}
		count+=n;
		cout << count << newl;
	}		
		
return 0;
}
