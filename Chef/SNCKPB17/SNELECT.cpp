#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		string line;
		cin >> line;
		int s=0,m=0;
		vector<int> eaten(100);
		
		for(int i = 0; i<line.length(); i++){
			if(line[i]=='m'){
				m++;
				if(i>0)
					if(line[i-1]=='s' && !eaten[i-1]){
						eaten[i-1] = 1;
						continue;
					}
				if(i<line.length()-1)
					if(line[i+1]=='s' && !eaten[i+1]){
						eaten[i+1] = 1;
						continue;
					}
				
			}
		}
		
		for(int i = 0; i<line.size(); i++)
			if(line[i]=='s' && !eaten[i])
				s++;
		
		/*for(int i = 0; i<eaten.size(); i++){
			if(eaten[i]!=0)
				cout << i << " - " << eaten[i] << newl;
		}
		cout << m << " -m" << newl << s << " -s" << newl;*/
		
		if(m>s)
			cout << "mongooses";
		else if(s>m)
			cout << "snakes";
		else cout << "tie";
		
		cout << newl;
	}		
		
		
	
return 0;
}
