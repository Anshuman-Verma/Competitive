#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
            
        int mx = 0, cm = 0;
        char cur = s[0];

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '=')
                continue;
            if(s[i] == cur)
                cm++;
            else if(s[i] != cur) {
                cur = s[i];
                cm = 1;
            }
            mx = max(mx, cm);
        } 
        cout << mx + 1 << newl;
    }
return 0;
}