#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
 
 
using namespace std;
int main()
    {
        int t;
        cin>>t;
        for(int i=1;i<=t;i++){
            int firstbd,secondbd,firstpak,secondpak,won=0;
            for(int j=0;j<2;j++){
                 cin>>firstbd>>secondbd>>firstpak>>secondpak;
                if((firstbd+secondbd)>(firstpak+secondpak))
                    won++;
            }
            if(won==2)
                cout<<"Banglawash\n";
            else
                cout<<"Miss\n";
        }
        return 0;
    }
