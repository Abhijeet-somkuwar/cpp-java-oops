#include <iostream>
using namespace std;

int f(int x){
    if(x<=1) return 1;
    // int count = 0;
    // count += 1;
    return x - f(x - 2);
}

int main() {
    // Write C++ code here
    int x = 15;
    int result = f(x);
    cout<<result;

    return 0;
}