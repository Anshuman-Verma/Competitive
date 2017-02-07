#include<bits/stdc++.h>

using namespace std;

main(){
	
	long long int t,c,d,l;
	cin >> t;
	while(t--){
		
		cin >> c >> d >> l;
		
		if(l>4*(c+d) || l%4!=0 || (c+d-(l/4)) > min(c,2*d)  )
			cout << "no" << endl;
		
		else cout << "yes" << endl;
		
	}
	

return 0;
}
