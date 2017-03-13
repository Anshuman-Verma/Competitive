#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int activity, someno= 0,count = 0,ans = 0;
		string origin, adesc;
		
		cin >> activity >> origin;
		
		while(activity--){
			someno = 0;
			string adesc;
			cin >> adesc;
			if(adesc == "CONTEST_WON" || adesc == "BUG_FOUND")
				cin >> someno;
			
			if(adesc=="CONTEST_WON")
				(someno>20) ? count += 300 : count += 300 + 20 - someno;
			else if(adesc =="TOP_CONTRIBUTOR")
				count+=300;
			else if(adesc=="CONTEST_HOSTED")
				count+=50;
			else if(adesc=="BUG_FOUND")
				count +=  someno;
					
		}
		if(origin=="INDIAN")
			while(count>=200){
				count-=200;
				ans++;
			}
		else 
			while(count>=400){
				ans++;
				count-=400;
			}
			
		cout <<  ans << newl;
	}		
	
return 0;
}
