#include <iostream>
#include<ctype.h>
#include<iomanip>
#include<string>
#include<stdio.h>
#include<cmath>
#include<algorithm>
 
using namespace std;
 
struct post{
    int s=0,p,f;
    string a;
 
};
 
 
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    post r[m];
    int sp[n];
    for(i=0;i<n;i++){cin>>sp[i];}
    for(j=0;j<m;j++)
    {
        cin>>r[j].f>>r[j].p>>r[j].a;
        for(int k=0;k<n;k++)
        {
            if(r[j].f==sp[k])
            {
                r[j].s=1;
                break;
            }
        }
    }
    
    post temp;
    for(i=0;i<m;i++)
    {
        for(j=0;j<(m-i-1);j++)
            if(r[j].p<r[j+1].p){
                temp=r[j];
                r[j]=r[j+1];
                r[j+1]=temp;
            }
    }
   /* for(int i=0;i<m;i++)
    {
        cout<<r[i].f<<" "<<r[i].p<<" "<<r[i].a<<endl;
    }*/
    j=0;
    int b[m];
    for(i=0;i<m;i++)
    {
        if(r[i].s==1)
            cout<<r[i].a<<endl;
        else
            b[j++]=i;
    }
    
    for(int i=0;i<j;i++)
    {
        cout<<r[b[i]].a<<endl;
    }
 
 
 
 
   return 0;
}
