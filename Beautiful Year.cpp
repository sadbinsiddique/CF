#include<bits/stdc++.h>
using namespace std;  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d,e;
    cin>>a;
    while (1){
        a++;
        b=a/1000;
        c=(a/100)%10;
        d=(a/10)%10;
        e=(a%10);
        if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)  break;
    }
    cout<<a;
    return EXIT_SUCCESS;
}