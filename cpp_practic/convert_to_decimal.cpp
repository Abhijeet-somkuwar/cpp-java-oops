#include<iostream>
#include<string>

using namespace std;
    int convertToDecimal(string x){
        int len = x.size();
        int p2 = 1;
        int num = 0;

        for(int i = len -1; i >= 0; i--){
            if(x[i] == '1'){
                num = num + p2;
            }
                p2 = p2*2;
            
        }
    return num;
}



int main(){
    string str;
    cout<<"Enter the Binary: ";
    cin>>str;
    int ans = convertToDecimal(str);
    cout<<ans;
    
  return 0;
}