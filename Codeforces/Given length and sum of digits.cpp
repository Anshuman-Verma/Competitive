#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

	int m,s;
	cin >> m >> s;

    // boundation check
	if(s > m*9 || m>1 && s<1)
		cout << "-1 -1";

	else{
        int a=s,b=s, // temp sum of max and min  numbers
        index=m-1;

        //print min
        while(index>=0){
            int pos;
            pos = max(0,a-9*index);
            if(index==m-1 && a && pos==0)pos = 1;  // setting initial position
            cout << pos;
            index--;
            a-=pos;
        }

        cout << ' ';

        //print max
        index = m;
        while(index!=0){
            int pos;
            pos = min(9,b);
            cout << pos;
            index--;
            b-=pos;
        }

	}



return 0;
}
