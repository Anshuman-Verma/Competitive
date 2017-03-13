#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long xotime = 0,xetime = 0, yotime = 0, yetime = 0;
		vector <int> xtime(n);
		vector <int> ytime(n);
		
		for(int i = 0; i <n; i++){
			cin >> xtime[i];
			if(((i+1)%2)==0)
				xetime+=xtime[i];
			else 
				xotime+=xtime[i];
		}
		for(int i = 0; i <n; i++){
			cin >> ytime[i];
			if(((i+1)%2)==0)
				yetime+=ytime[i];
			else 
				yotime+=ytime[i];
		}
			
		(xotime+yetime) < (xetime+yotime) ? cout << (xotime+yetime) : cout << (xetime+yotime);
		cout << newl;
	}		
	
return 0;
}
