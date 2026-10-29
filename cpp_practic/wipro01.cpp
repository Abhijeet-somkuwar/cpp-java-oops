#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int degreeOfrotation(int n, int m){
    int degreeofr;
    if(n < m){
        degreeofr = (360 * (m - n)) / 12;
    }

    else{
        degreeofr = (360 * (12 - n + m)) / 12;
    }

    return degreeofr;
}

int main(){
    int n, m;
    
    cout<<"Enter first number(n): ";
    cin>>n;
    cout<<"Enter second number(m): ";
    cin>>m;

    int ans = degreeOfrotation(n,m);
    cout<<ans;
    return 0;
}