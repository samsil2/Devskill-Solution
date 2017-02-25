#include <iostream>
using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        if(n>=120)
            printf("Good Boy Sifat\n");
        else
            printf("Naughty Boy Sifat\n");
    }

    return 0;
}
