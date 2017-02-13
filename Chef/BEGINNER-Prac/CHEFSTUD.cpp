#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		
		//inverting students faces
		for(int i = 0; i<s.length() ; i++){
			if(s.at(i)=='*')
				continue;
			
			else if(s.at(i)=='<')
				s.at(i) = '>';
				
			else if(s.at(i)=='>')
				s.at(i) = '<';
		}
		//	cout << s  << endl;  //  just for checking !
		int count = 0;		
		//analysing talking students
		for(int i =0; i<s.length()-1; i++){
				if(s.at(i)=='>' && s.at(i+1)=='<')
					count++;
		}
		
		cout << count << endl;
	}
		
	
return 0;
}
