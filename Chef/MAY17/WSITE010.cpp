#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int count = 0;
	map<int,vector<string> > acc;
	vector<string> block;
	while(n--){
		char nature;
		cin >> nature;
		string temp;
		cin >> temp;
		if(temp.length() >  count)
			count = temp.length();
		if(nature=='+')
			for(int i =0; i < temp.length(); i++)
				acc[i+1].push_back(temp.substr(0,i+1));
		else
			block.push_back(temp);
	}
	
	
	/*for(int i = 0;  i<count; i++){
		for(int j = 0; j < acc[i].size(); j++)
			cout << acc[i][j] <<  " ";
		cout << newl;
	}*/
	
	for(int i = 0; i<block.size(); i++){
		// taking each string in blocked vector
		
		for(int j = 0; j<=block[i].length(); j++){
			int found = 0;		
		}
		
	}
	
	
return 0;
}
