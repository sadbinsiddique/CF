//
// Created by mdsiam on 5/14/2022.
//
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    cin>>i;
    (i%5==0) ? cout<<i/5 : cout<<(i/5)+1;
    return EXIT_SUCCESS;
}