#include<bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >>  t;
	while(t--){
		int n,side;
		cin >> n;
		side = n%8;
		if(side<4&& side > 0)
			n = n + 3;
		else if(side>=3 && side>0 && side<7) n = n-3;
		
		else if(side==0) n = n-1;
		else if(side==7) n = n+1;
		
		if(side == 1 || side == 4)
			cout << n  << "LB" << endl;
		
		else if(side == 2 || side == 5)
			cout << n << "MB" << endl;
			
		else if(side == 3 || side == 6)
			cout << n << "UB" << endl;
			
		else if(side == 0)
			cout << n << "SL" << endl;
			
		else if (side == 7)
			cout << n << "SU" << endl;
	}
	
return 0;
}
