#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n, flag = 0, a, b, maxlead = 0, p1 =0, p2=0;
	cin >> n;
	while(n--){
		cin >> a >> b;
		p1+=a;
		p2+=b;
		if((p1 > p2) && (p1-p2)>maxlead){
			flag = 0;
			maxlead = p1-p2;
		}
		
		else if((p2 > p1) && (p2-p1) > maxlead){
			flag =  1;
			maxlead = p2-p1;
		}
	}
	
	cout << flag +1 << " " << maxlead;	
	
return 0;
}
