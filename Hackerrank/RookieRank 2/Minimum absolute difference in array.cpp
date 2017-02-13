#include <bits/stdc++.h>

#define newl "\n"

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a[n];
    for(int a_i = 0; a_i < n; a_i++)
       cin >> a[a_i];
       
	sort(a, a+n);
	int diff = INT_MAX;
	
	for(int i = 0; i<n-1; i++ ){
		if(abs(a[i]-a[i+1])< diff)
			diff = abs(a[i]-a[i+1]);
	}	
    
    cout << diff << newl;
    
    return 0;
}

