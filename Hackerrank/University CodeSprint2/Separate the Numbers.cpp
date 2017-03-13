#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int q;
	cin >> q;
	while(q--){
		
		string s;
		cin >> s;
		int flag = 1,pos,digcount=1,cur,next;		// digcount stores the no of digits taken at a time
		
		if(s[0]=='0')flag = 0; 		// trailing zero found at initial pos
		
		int initial = s[0]-48 ;
		for(int i = 1; ;i++){
			//initial += pow(10,digcount)*((int)s[i]-48);
			if(s[i]=='9')
				digcount++;
		}
		cout << initial << newl;
		cur = initial;
		
		//string traversal
		for(pos = 1; pos<s.length() && flag;  pos+=digcount){
			
			for(int i = 0; i<digcount ;i++){
				next += pow(10,digcount)*(s[pos]-48);
			}
			
			if(next-cur!=1)flag = 0;
			
			else if(next%10==9)
				digcount++;
		}
		
		
		
	}
	
return 0;
}
