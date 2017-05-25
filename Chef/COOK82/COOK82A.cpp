#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int rm,m,b,e;
		vector<string> team(4);
		int temp;
		for(int i = 0; i<4; i++){
			cin >> team[i] >> temp;
			if(team[i]=="Barcelona")
				b=temp;
			else if(team[i]=="Malaga")
				m=temp;
			else if(team[i]=="RealMadrid")
				rm=temp;
			else if(team[i]=="Eibar")
				e=temp;
		}
		
		int flag = 1;
		if(rm<m && b>e)
			flag = 0;
		
		flag ? cout << "RealMadrid" : cout  << "Barcelona";
		cout << newl;
		
	}		
		
		
	
return 0;
}
