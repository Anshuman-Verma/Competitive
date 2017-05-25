#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	long long a[n+5]={0},b[n+5]={0},diff[n+5]={0}bsum[2*n+1] = {0},ans=0,bs=0;
	for(int i = 1; i<=n; i++)
		cin >> a[i];
	for(int i = 1; i<=2*n; i++){
		if(i<=n){
		cin >> b[i];
		bs+=b[i];
		bsum[i] = b[i] + bsum[i-1];
		}
		else{
			bsum[i] = bs + bsum[i-n];
		}
	}
	/*for(int i= 0 ; i<=2*n; i++)
		cout << bsum[i] << " ";*/
	diff[1] = max(-1e9, a[1]-bsum[1])
	for(int x = 2; x<=n; x++)
		diff[i] = max(diff[i-1], a[i] - diff[i]);
		
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			//cout << i << "-i " << j << "-j ";
			int temp;
			if(i==j){
				//cout << a[i] << " eq" <<newl;
				ans = max(ans,a[i]);
			}
			
			else if(i<=j){
				long long temp = 0;
				temp = bsum[j-1]-bsum[i];
				//cout << a[i]+a[j]+temp << " less" << newl;
				ans = max(ans, a[i]+a[j]+temp);
			}
			
			else if(i>j){
				long long temp1 = 0;
				temp1 = bsum[n+j-1]-bsum[i];
				//cout << a[i]+a[j]+temp1 << " more" << newl;
				ans = max(ans, a[i]+a[j]+temp1);
			}
			//cout << ans << " ans" << newl;
		}
	}
	
	cout << ans << newl;
	
return 0;
}
