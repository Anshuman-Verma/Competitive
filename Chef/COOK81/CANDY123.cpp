#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int asum=0,bsum=0,counter=1,prev=0;
		while(asum<=a && bsum<=b){
			prev == 0? asum+=counter : bsum+=counter;
			prev=!prev;
			counter++;
		}
		
		!prev==0 ? cout << "Bob" : cout << "Limak";
		cout << newl;
	}	
			
		
	
return 0;
}
