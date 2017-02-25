
#include <iostream>
using namespace std;

int main()
{
    int t, n, x,me, miraclaw;
    cin>>t;
     
    while(t--)
    {
        me=miraclaw=0;
       cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            me+=x;
            if(x-i>0)
                miraclaw+=(x-i);
        }
         cout<<me-miraclaw<<endl;
    }

    return 0;
}
