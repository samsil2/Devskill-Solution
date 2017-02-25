#include <iostream>
using namespace std;
int main()
{
	int t,n,i,f=0;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		int c=1;
		f=0;
		cout<<"Case "<<i<<": ";
		 while(1)
        {
            if(c*c==n)
            {
                f =1;
                break;
            }
            else if(c*c>n)
                break;
            c++;
        }
        if(f==1) cout<<"YES\n";
        else cout<<"NO\n";
	}
	
}
