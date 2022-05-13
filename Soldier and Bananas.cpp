//
// Created by mdsiam on 5/14/2022.
//
/*
 A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana,
 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).
He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?
 * */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k , n , w,temp=0;
    cin>>k>>n>>w;
    for (int i = 1; i <= w; ++i) {
        temp+=k*i;
    }
    if(n<temp)
    {
        temp=temp-n;
        cout<< temp;
    } else
        cout<<0;
    return EXIT_SUCCESS;
}
