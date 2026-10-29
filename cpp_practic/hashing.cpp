#include <iostream>
using namespace std;

int main(){
    int n = 6,q,num;
    int maximum = -1000000;
    int arr[n]={};

    
    for(int i = 0; i < n; i++){
        cout<<"values in arr[]:";
        cin>>arr[i];
        
        maximum = max(maximum, arr[i]);
    }
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i];
        
    // }
    int hash[maximum+1]={0};
    for(int i = 0; i<n; i++){
        hash[arr[i]]++;
    }

    cout<<"\nEnter the no of queries: ";
    cin>>q;

    while (q--)
    {
        cout<<"\nEnter the no. of which  you want to check its occurence: ";
        cin>>num;
        if(num > maximum){
            cout<<"0";
        }
        else cout<<"\n"<<hash[num];
    }
    int element = 0;
    for (int  i = 0; i < maximum+1; i++)
    {
        if (hash[i] > element){
            element = hash[i];
        }
    }

    cout<<"Highest occurence element is : "<<element;

    
return 0;
}