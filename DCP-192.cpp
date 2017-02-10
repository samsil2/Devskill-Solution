#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
 
 
using namespace std;

int main()
{
   long long price,cost;
   int t,i,j,n;
   cin>>t;
   for(i=1;i<=t;i++)
   {
   	cin>>n;
   	long long p=LONG_LONG_MAX,c=LONG_LONG_MAX;
   	for(j=0;j<n;j++)
   	{
   		cin>>price>>cost;
   		if(price<p){
   			p=price;
   			c=cost;
		   }
		   else if(p==price)
		   {
		   	c=min(c,cost);
		   } 
   		
	   }
	   cout<<"Case "<<i<<": "<<p<<" "<<c<<endl;
   }
    return 0;
}
