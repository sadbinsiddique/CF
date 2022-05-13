//
// Created by mdsiam on 5/14/2022.
//
#include<bits/stdc++.h>
using namespace std;
void cal(int x , int y, int z);
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    system("cls");
    if(a<=b) cal(a,b,0);
    return EXIT_SUCCESS;
}
void cal (int x,int y,int z)
{
    if (x<=y)
    {
        z++;
        x=x*3;
        y=y*2;
        cal(x,y,z);
    }
    else if (x>y) cout<<z;
}