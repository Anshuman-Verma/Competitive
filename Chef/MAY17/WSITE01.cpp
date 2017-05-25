#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	
	int n;
	cin >> n;
	multiset<string> res, unblock;
	multiset<string>::iterator it;
	vector<string> block, result;
	while(n--){
		char q;
		string in;
		cin >> q >> in;
		if(q=='+')
			for(int i = 0; i < in.length(); i++)
				unblock.insert(in.substr(0,i+1));
		else
			block.push_back(in);
	}
	
	for(int i = 0; i <block.size(); i++){
		//  take up each string in block vector
		int found = false, flag = 1;
		string ts = "";
		ts+=block[i].substr(0,1);

		do{
			if(found)
				ts+=block[i][ts.length()];
			it = unblock.find(ts);
			if(it!=unblock.end())
				found = true;
			else
				found = false;
			if(ts==block[i] && found)
				flag = 0;
			
		}while(found);
		
		if(ts!="" && flag){
			//unblock.insert(ts);
			//res.insert(ts);
			result.push_back(ts);
		}
	}
	sort(result.begin(), result.end());
	if(result.size()){
		cout << result.size() << newl;
		for(int i = 0; i <result.size(); i++){
			cout << result[i];
			if(i!=result.size()-1)
				cout << newl;
		}
	}
	else cout << "-1";
	
	/*if(res.size()){
		cout <<  res.size() << newl;
		for(it = res.begin(); it!=res.end(); it++)
			cout << *it << newl;
	}
	else cout << "-1";*/
	
return 0;
}
