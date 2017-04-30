#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,day=0,review = 2,count= 0;
		double temp=79.6;
		cin >> n;
		vector<double> ball(n);
		for(int i = 0; i<n; i++)
			cin >>  ball[i];
		sort(ball. begin(), ball.end());
		
		//finding start day
		while(ball[0]>(79.6+day*80))
			day++;
			
		// the main thing lol
		for(int i =0; i<ball.size(); i++){
			if(ball[i]>(79.6+day*80)){
				day++;
				review = 2;
			}
			
			if(review){
				count++;
				review--;
			}
		}
		
		cout << count << newl;
	}		
		
		
	
return 0;
}
