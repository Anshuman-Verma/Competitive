#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int gcd(int a,  int b){
	if(b==0)
		return a;
	else 
		return gcd(b, a%b);
	
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int a,b=0;
		string B;
		cin >> a >> B;
		
		if(a==0){
			cout << B << newl;
			continue; 
		}
		for(int i = 0; B[i]!='\0'; i++)
			b = ((b*10)+B[i] - '0')%a;
		
		cout << gcd(a,b) << newl;
	}
		
	
return 0;
}
