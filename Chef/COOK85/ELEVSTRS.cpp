#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--) {
		double n, v1, v2;
		cin >> n >> v1 >> v2;
		
		((n*2)/v2) < ((sqrt(2)*n)/v1) ? cout << "Elevator" : cout << "Stairs";
		cout << newl;
	}
		
return 0;
}
