#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
		
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		char cur = ' ', prev = ' ';
		int a = 0, b = 0, acc = 0;
		for(int i = 0; i<s.length(); i++) {
			if(s[i] == 'A')a++;
			if(s[i] == 'B')b++;
			if(s[i] == 'A' || s[i] == 'B') {
				if(cur == ' ')
					cur = s[i];
				else {
					prev = cur;
					cur = s[i];
					}
				if(prev == cur)
					prev == 'A' ? a+=acc : b+=acc;
					acc = 0;
				}
			else if(s[i] == '.')acc++;
		}
		cout << a << " " << b << newl;

	}


return 0;
}
