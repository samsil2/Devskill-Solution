#include <iostream>
#include <cstring>
#include<algorithm>
#include <cstdio>

using namespace std;

int main()
{
	 int t;
        long long n;
        cin>>t;
          while(t--){
            cin>>n;
            if(n%2==0)cout<<"1"<<endl;
            else cout<<"9"<<endl;
        }
        return 0;
}
