#include<iostream>
#include<string>

using namespace std;

string reverse(string y) {
    int left = 0;
    int right = y.size() - 1;
    while (left < right) {
        char temp = y[left];  
        y[left] = y[right];
        y[right] = temp;
        left++;
        right--;
    }
    return y;  
}

string convert2Binary(int x){
    string ans = "";
    while(x > 0){
        if(x%2 == 1){
            ans += '1';
        }
        else{
            ans += '0';
        }

        x = x /2;
    }

    ans =  reverse(ans);
    return ans;

}

int main(){
    int a ;
    cout<<"Enter a decimal number: ";
    cin>>a;
    string answer = convert2Binary(a);
    cout<<"Binary of "<<a<< " is: "<<answer;
    return 0;

}


