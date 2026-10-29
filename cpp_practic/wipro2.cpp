#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, n, d;
    int ans;
    cin>>a;
    cin>>d;
    cin>>n;

    ans= a + (n - 1)* d;
    cout<<ans;


    return 0;
}