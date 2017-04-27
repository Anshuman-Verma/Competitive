#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,k;
    cin>>n>>k;

    vector<int> v[2];
    for ( int i=0;i < 2;++i ){
        for ( int j=0;j<n;++j ){
            int temp; cin>> temp;
            v[i].push_back(temp);
        }
    }

    sort(v[0].begin(),v[0].end());
    sort(v[1].begin(),v[1].end());

    int result = v[0].back() + v[1].back();

    for ( int i=1; i<=k; ++i ){
        int t = max(v[0][n-1],v[1][n-1]) + max(v[0][i-1],v[1][n-1-i]);
        result = min(result,t);
        t = max(v[0][n-1-i],v[1][i-1]) + max(v[0][n-1],v[1][n-1]);
        result = min(result,t);
    }

    cout << result << endl;

	
return 0;
}
