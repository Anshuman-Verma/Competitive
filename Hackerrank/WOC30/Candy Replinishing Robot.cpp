#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,t,total =0, candy;
	cin >> n >> t;
	candy = n;
	vector<int> candytaken(t);
	for(int i =0; i<t; i++){
		cin >> candytaken[i];
		if(candy<5){
			total += n-candy;
			candy = n; 
		}
		candy-=candytaken[i];
		
	}
	
	cout << total << newl;	
	
return 0;
}
