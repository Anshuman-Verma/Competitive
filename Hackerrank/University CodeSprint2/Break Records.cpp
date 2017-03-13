#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++)
       cin >> score[score_i];
    
    int max = score[0], min = score[0],most=0,least=0;
    for(int score_i = 1; score_i < n; score_i++){
    	if(score[score_i]>max){
    		max = score[score_i];
    		most++;
		}
		else if(score[score_i]<min){
			min = score[score_i];
			least++;
		}
		
	}
      cout << most << " " << least;
      
      
    
    
    // your code goes here
    return 0;
}

