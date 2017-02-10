#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,Cx, Cy, Px, Py,i;
	double res,r;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>Cx>>Cy>>r>>Px>>Py;
		res=sqrt(((Cx-Px)*(Cx-Px))+((Cy-Py)*(Cy-Py)));
		cout<<"Case "<<i+1<<": ";
		if(res>r) cout<<"Outside\n";
		else if(res==r) cout<<"OnCircle\n";
		else cout<<"Inside\n";
	}
}
