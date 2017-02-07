#include<bits/stdc++.h>

using namespace std;

int main(){
	
	std::ios::sync_with_stdio(false);	
	
	int t;
	cin >> t;
	
	 while(t--){ 	
	 	long long int n,x;
	 	cin >> n >> x;
	 	
	 	if((n%x)!=0 && n>x)
	 		cout << n%x << endl;
	 		 
	 	else if(n<=x)
	 		cout << n << endl;
	 		
	 	else  cout << x << endl;
	 		
	 }
	
return 0;
}
