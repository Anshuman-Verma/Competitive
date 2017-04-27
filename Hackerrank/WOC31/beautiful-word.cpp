#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	int flag = 1, found;
	string w,vowel="aeiouy";
	cin >> w;
	for(int i = 1; i<w.length(); i++){
		char prev = w[i-1];
		if(w[i]==prev)
			flag = 0;
		else if((w[i]=='a' || w[i]=='e' ||  w[i]=='o' || w[i]=='u' || w[i]=='i' || w[i]=='y') && (w[i-1]=='a' || w[i-1]=='e' ||  w[i-1]=='o' || w[i-1]=='u' || w[i-1]=='i' || w[i-1]=='y'))
			flag = 0;
	}
	
	flag ? cout << "Yes" : cout << "No";
		
	
return 0;
}
