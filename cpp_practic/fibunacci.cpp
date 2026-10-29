#include<iostream>

using namespace std;

int printFibunacci(int n){
    if (n == 1 || n == 2)
    {
        return n;
    }
    
    

    int t1 = 1, t2 = 1, nextTerm = 0;

    cout<<"Fibunacci sequence:"<<t1<<","<<t2<<",";

    for(int i = 3; i<= n; i++){
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

    cout<<nextTerm<<",";
    }
    
return 0;
}

int main(){

     int n;

    cout<<"Enter the no. of terms:";
    cin>>n;

    
    // int results = printFibunacci(n);
    printFibunacci(n);

    return 0;
}