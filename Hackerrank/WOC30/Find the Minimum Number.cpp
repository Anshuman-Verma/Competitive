#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

void print(int n,int  final){
	if(n==2){
		cout << "min(int, int)";
		for(int i = 0 ; i<final-2; i++)
			cout << ")";
	}
	else{
		cout << "min(int, ";
		print(n-1, final);
	}
	
	
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int final = n;
	if(n>2)print(n,final);
	else 
		cout << "min(int, int)";
return 0;
}
