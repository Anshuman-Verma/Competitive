#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

    int t;
    cin >> t;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    reverse(alpha. begin(),alpha.end());
    while(t--){
        int k;
        cin >> k;
        string a,b;
        while(k!=0){
            if(k>=25){
                a+=alpha;
                k-=25;
                continue;
            }
            else{
                b+= alpha.substr(alpha.length()-k-1,k+1);
                k = 0;
            }
        }
        cout << b + a << newl;
    }
return 0;
}
