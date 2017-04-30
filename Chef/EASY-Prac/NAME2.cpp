#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int flag = 1;
		string a,b;
		cin >> a >> b;
		if(a.length()>b.length())
			swap(a,b);
		for(int i =0; i<a.length() && flag; i++){
			char temp = a[i];
			int j =0,found = 0;
			while(j<b.length()){
				if(temp==b[j]){
					found = true;
					b[j] = '1';
					break;
				}
				j++;
			}
			if(!found)
				flag = 0;
		}
		
		flag ? cout << "YES" :  cout << "NO";
		cout << newl;
	}		
		
		
	
return 0;
}
