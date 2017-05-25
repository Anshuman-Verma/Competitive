#include<bits/stdc++.h>
#define newl "\n"
#define MODULO 1000000007

using namespace std;

set<string>a;

bool check(char c){
	if(c >= 'a'  && c<=  'z')
		return true;
	return false;	
}


int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	string ip;
	cin >> n;
	for(int j =0; j<=n ; j++){
		string acc = "";
		getline(cin, ip);
		ip+=' ';
		for(int i =0; i<=ip.size(); i++){
			if(ip[i]>='A' && ip[i]<='Z')
				ip[i]+=32;
			if(!i && !check(ip[i]))continue;
			if(!check(ip[i]) && check(ip[i-1])){
				a.insert(acc);
				acc = "";
			}
			else if(check(ip[i]))
				acc+=ip[i];
		}
	}
	
	cout << a.size() << newl
	for(set<string>::iterator it = a.begin(); it!=a.end(); ++it)
		cout << *it << newl;
		
	
return 0;
}
