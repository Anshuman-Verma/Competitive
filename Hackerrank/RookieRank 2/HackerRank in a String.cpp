#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
    	string s;
		cin >> s;
		
		int flag = 0, pos=0;
		char temp;
		string orig = "hackerrank";
		
		for(int i = 0; i<s.length(); i++){
			temp = orig[pos];
			if(s[i]==temp)
				pos++;
		}
    	
    	if(pos==10)
    		flag = 1;
    		
    	if(flag)
    		cout <<  "YES" << endl;
    	else 
    		cout << "NO" << endl;
    	
    	
	}
	
	
    return 0;
}

