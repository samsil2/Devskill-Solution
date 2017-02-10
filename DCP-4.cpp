#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
 
 
using namespace std;
int main()
{
	int hour,mem,h1,h2,res=0,sum=0;
	 while(cin>>hour>>mem && (hour,mem)!=EOF)
	 {
	 	res=0;
                sum=0;
                 for(int i=0;i<mem;i++)
                {
                    cin>>h1;
                 sum+=h1;
                }
                 if(hour%sum==0)
                 {
                     res=hour/sum;
                 }
                 else{
                     res=(hour/sum)+1;
                 }
                 if(res==1) cout<<"Project will finish within 1 day.\n";
                 else cout<<"Project will finish within "<<res<<" days.\n";
	 }
}
