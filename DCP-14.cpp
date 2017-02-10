#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<iomanip>
 
 
using namespace std;
int main()
{
	int t,i;
	  double x,y,z;
	  cin>>t;
	  for(i=0;i<t;i++)
	  {
	  	cin>>x>>y>>z;
	  	cout<<fixed<<setprecision(2)<<sqrt(((x*x)+(y*y))+(z*z))<<endl;
	  }
	  return 0;
}
