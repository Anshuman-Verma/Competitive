#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,H,a,b,Area;
 
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld%lld",&H,&Area);
        
        
        a=H*H+4*Area;
        b=H*H-4*Area;
        
        if(b < 0)
         printf("%d\n",-1);
        else
         printf("%lf %lf %lf\n", 0.5 * (sqrt(a)-sqrt(b)),0.5*(sqrt(a)+sqrt(b)) ,(double) H );
        
    }
    
    
    return 0;
} 
