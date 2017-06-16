#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--){
        int c,ans=0;
        cin >> c;
        while(c--){
            int x,y;
            cin >> x >> y;
            ans ^= (x+y-2)%3;
        }
        ans ? cout << "MasterChef" : cout << "Football";
        cout << newl;
    }



return 0;
}
