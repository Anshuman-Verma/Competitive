#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >>  n  >> q;
		vector<int>val;
		for(int i = 0;  i<n; i++){
			int ip; cin >> ip;
			val.push_back(ip);
		}
		
		while(q--){
			int a,b,c,d;
			cin >> a >> b >> c >> d;
			a--;b--;c--;d--;
			
			if( abs((b-a)-(d-c)) > 1 ){
				cout << "NO" <<  newl;
				break; 
			}  
			int  limit = min((b-a),(d-c));
			vector<int> suba1,suba2;
			vector<int>::iterator it = val.begin();
			suba1.insert(suba1.begin(),it+a,it+b+1);
			suba2.insert(suba2.begin(),it+c,it+d+1);
			
			vector<int>::iterator s1, s2;
			/*for(s1 = suba1.begin();  s1!=suba1.end(); s1++)
				cout  << *s1 <<  " ";
			cout << newl;
			for(s2 = suba2.begin();  s2!=suba2.end(); s2++)
				cout  << *s2 <<  " ";
			cout << newl;*/
			sort(suba1.begin(),suba1.end());
			sort(suba2.begin(),suba2.end());
			
			
			s1 = suba1.begin();
			s2 = suba2.begin();
			int unc = 0,flag = 1;
			for(int i = 0; i<= limit && flag; i++){
				//cout << unc << "-unc" << newl;
				if(*s1!=*s2)
					unc++;
				
				if(unc>1)
					flag = 0;
				s1++;
				s2++;	
			}
			
			flag ? cout << "YES" : cout << "NO";
			cout << newl;
			
		}
		
		
	}
		
		
	
return 0;
}
