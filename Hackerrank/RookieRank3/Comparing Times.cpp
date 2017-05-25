#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

string compare(string a, string b){
	if(a[5] > b[5])
			return "Second";
		
	else if(a[5] < b[5])
		return "First";
	
	if(a[0] > b[0])
		return "Second";
	else if(a[0] < b[0])
		return "First";
	if(a[1] > b[1])
		return "Second";
	else if(a[1] < b[1])
		return "First";
	if(a[3] > b[3])
		return "Second";
	else if(a[3] < b[3])
		return "First";
	if(a[4] > b[4])
		return "Second";
	else if(a[4] < b[4])
		return "First";
	
		
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	while(n--){
		string a,b;
		cin >>  a >> b;
		
		cout << compare(a,b)  << newl;
		
		
		
	}		
		
		
	
return 0;
}
