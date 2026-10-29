#include <iostream>
using namespace std;

int main(){
    int n = 6,q;
    int maximum = -1000000;
    char arr[n]={};
    char hash[123]={0};

    
    for(int i = 0; i < n; i++){
        cout<<"Enter values in arr[]:";
        cin>>arr[i];
        hash[arr[i]]++;
        
    }


    cout<<"\nEnter the no of queries: ";
    cin>>q;

    while (q--)
    {
        char character;
        cout<<"\nEnter the character of which  you want to check its occurence: ";
        cin>>character;
        int result = hash[character];
        if(character > 123){
            cout<<"0";
        }
        
        else cout<<"\n"<<result;
    }
    
    
return 0;
}