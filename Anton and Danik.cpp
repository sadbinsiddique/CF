#include<bits/stdc++.h>
using namespace std;    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int j,a=0,d=0;
    string s;
    cin>>j>>s;
    for (int i = 0; i < j; i++) (s[i]=='A') ? a++ : d++;
    if(a < d ) cout<<"Danik";
    else if(a > d) cout<<"Anton";
    else if (a == d) cout<<"Friendship";
    return EXIT_SUCCESS;
}