#include <iostream>
using namespace std;

int main()
{
    int i,t;
    long long n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    	cin>>n;
    	  n--;
        n*=3;
        cout<<"Case #"<<i<<": ";
        if(n%2!=0) cout<<n+3<<" "<<n+2<<" "<<n+1<<endl;
        else cout<<n+1<<" "<<n+2<<" "<<n+3<<endl;
    	
	}
    return 0;
}
