#include <iostream>
using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int c=0, d=0;
        while(c<n)
        {
            d++;
            c+=d;
        }
        printf("%d\n", d);
    }

    return 0;
}
