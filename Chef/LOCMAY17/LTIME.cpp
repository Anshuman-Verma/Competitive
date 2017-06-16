#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	string s;
	cin >> s;
	int ones=0,lastone=-1,bones=0,flag = 0;
	for(int  i  =0; i< s.size(); i++){
		
		if(s[i]=='1'){
			if(i>0){
				if(s[i-1]=='0'){
					bones++;
					ones++;
				}
				else if(s[i-1]=='1' &&ones==0){
				ones=1;
			}
			}
		}
	}
		cout << bones + ones << newl;
	
return 0;
}
