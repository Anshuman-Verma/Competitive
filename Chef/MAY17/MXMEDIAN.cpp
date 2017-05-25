#include<bits/stdc++.h>


using namespace std;

int main(){
	
	int tc;
	cin >> tc;
	while(tc--){
		int n,ans,temp;
		cin >> n;
		vector<int> a(2*n);
		for(int i = 0;  i<a.size();  i++)
			cin >> a[i];
		sort(a.begin(),a.end());
		ans = a[n+n/2];
		cout <<  ans << endl;
		
		temp = a[n-1];
		a[n-1] = ans;
		a[n+n/2] = temp;
		
		int j = 2*n-1;
		for(int i = n+1; i<n+n/2; i+=2){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j-=2;
		}
		for(int i = 0; i<a.size(); i++)
			cout << a[i]  << " ";
		cout << endl;
		
	}		
		
		
	
return 0;
}
