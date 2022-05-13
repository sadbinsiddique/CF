//
// Created by mdsiam on 5/14/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int up=0,low=0;
    string s;
    cin >> s;
    for (char i : s) (isupper(i)) ? up++ : low++;
    if(up>low)
        for (char & i : s) i= toupper(i);
    else
        for (char & i : s) i=tolower(i);
    cout<<s;
    return EXIT_SUCCESS;
}