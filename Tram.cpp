//
// Created by mdsiam on 5/14/2022.
//
#include<bits/stdc++.h>
using namespace std;
void functions (int x);
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    functions(n);
    return EXIT_SUCCESS;
}
void functions (int x){
    int a,b,sum=0,k=0;
    for (int i = 0; i < x; i++){
        cin>>a>>b;
        sum=(a+k)-b;
        (sum<0) ? k=0 : k=sum;
    }
    cout<<sum;
}
