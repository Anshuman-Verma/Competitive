#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int tc;
	cin >> tc;
	while(tc--){
		int n,i,flag=1,get5 = 0;
		double total = 0;
		cin >> n;
		
		vector<int> score(n);
		
		for(i = 0; i<score.size(); i++){
			cin >> score[i];
			total += score[i];
			
			if(score.at(i)==2)
				flag = 0;
			else if(score.at(i)==5)
				get5 =1 ;
		}
		
		if(total/n<4.0)flag = 0;
		
		if(flag && get5)
			cout << "Yes" << endl;
		else cout << "No" << endl;
		
		
	}		
	
return 0;
}
