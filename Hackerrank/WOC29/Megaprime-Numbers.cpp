#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)         
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}

int main(){
	std::ios::sync_with_stdio(false);
	
	long long first,last,count=0;
	cin >> first >> last;
	
	while(first!=last+1){
		int flag = 1,temp = first;
		if(isPrime(first)){
			while(temp!=0&&flag){
				if(!isPrime(temp%10))
					flag=0;
				temp = temp/10;
				
			}
		}
		
		else flag = 0;
		
		if(flag)count++;
		
		first++;
	}
	cout << count << newl;	
	
return 0;
}
