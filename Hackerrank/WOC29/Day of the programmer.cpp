#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

bool checkleap(int year){
	bool ans;
	
	if(year<=1917)
		(year%4==0) ? ans = true : ans = false;
	
	
	else if(year>1918)
		(year%400==0 || year%4==0 && year%100!=0) ? ans = true : ans = false;
	
	return ans;
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int year;
	cin >> year;
	bool leap = checkleap(year);	
	
	if(year==1918)
		printf("27.09.%d",year);
 
	
	
	else if(leap)
		printf("12.09.%d",year);	
	
	else printf("13.09.%d",year);
	
return 0;
}
