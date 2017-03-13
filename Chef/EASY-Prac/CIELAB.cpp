#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int a,b;
	cin >> a >> b;
	int c = a-b;
	
	(c%10) == 9 ? cout << c-1 : cout << c+1;		
	
return 0;
}
