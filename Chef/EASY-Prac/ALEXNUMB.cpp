#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--){
        long long n,ip;
        cin >> n;
        vector<int> val(n);
        for(int i = 0; i<n; i++)
            cin >> ip;
        n--;
        cout << ((n)*(n+1))/2 << newl;



    }



return 0;
}
