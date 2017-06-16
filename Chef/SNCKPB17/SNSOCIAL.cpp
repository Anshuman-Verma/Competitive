#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;


int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,m,mx=0,ans=0;
		cin >> n >> m;
		int money[n+2][m+2], temp[n+2][m+2];
		
		// set default values
		for(int i = 0; i<n+2; i++)
			for(int j = 0; j<m+2; j++){
				money[i][j] = 0;
				temp[i][j] = 0;
			}
				
		for(int i = 1; i<=n; i++)
			for(int j = 1; j<=m; j++){
				cin >> money[i][j];
				temp[i][j] = money[i][j];
				mx = max(mx,money[i][j]);
			}
		//cout << mx << " max " << newl;
		int house = n*m, maxCount = 0;
		
		for(int i = 1; i<=n ;i++)
			for(int j = 1; j<=m; j++)
				if(money[i][j]==mx)
					maxCount++;
		
		//cout << maxCount << " maxc " << newl << house << " hs " << newl;
		//check print
		/*for(int i = 0; i<n+2; i++){
			for(int j = 0; j<m+2; j++){
				cout << temp[i][j] << " ";
			}
			cout << newl;
		}*/
		
		while(maxCount!=house){
			ans++;
			
			for(int i = 1; i<=n; i++){
				for(int j = 1; j<=m; j++){
					if(temp[i][j]==mx)
						continue;
					
					temp[i][j] = max(money[i][j], max(money[i-1][j-1], max(money[i-1][j],max(money[i-1][j+1],max(money[i][j-1],max(money[i][j+1],max(money[i+1][j-1],max(money[i+1][j],money[i+1][j+1]))))))));
					if(temp[i][j]==mx)
						maxCount++;
				}
				//cout << maxCount << " maxc " << newl;
			}
			
			memcpy(money,temp, sizeof(temp));
						
			/*for(int i = 0; i<n+2; i++){
				for(int j = 0; j<m+2; j++){
					cout << temp[i][j] << " ";
				}
				cout << newl;
			}*/
					
		}
		cout << ans << newl;
	}		
		
		
	
return 0;
}
