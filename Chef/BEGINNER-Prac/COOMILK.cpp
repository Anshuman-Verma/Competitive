#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >>  t;
	while(t--){
		int n,flag = 1,count=0;
		cin >> n;
		vector<string> food(n);
		for(int i = 0; i<n; i++)
			cin >> food[i];
		
		if(food[n-1]=="cookie")
			flag = 0;
		string  prev,next;
		for(int i=0;  i<n && flag;  i++){
			prev = food[i];
			if(prev=="cookie")
				count++;
			else count = 0;
			
			if(count==2)
				flag = 0;
		}
	
		flag ? cout << "YES" : cout << "NO";
		cout << newl;		
	}
		
		
		
		
	
return 0;
}
