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
		
		vector<int> skill(n);
		for(int i=0; i<skill.size(); i++)
			cin >> skill[i];
			
		sort(skill.begin(), skill.end());
		
		int min = 1e9;
		for(int i = 0; i<n-1 ; i++){
			if(skill[i+1]- skill[i]<min)
				min = skill[i+1]- skill[i];
		}
		cout << min << newl;
	}		
	
return 0;
}
