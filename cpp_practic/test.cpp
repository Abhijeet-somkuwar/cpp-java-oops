// #include<iostream>
// using namespace std;

// int main(){

// int N = 2446;
// cout<<sizeof(N)-2;
//     return 0;
// }

#include <iostream>
using namespace std;
int countDigits(int &number) {
    int count = 0;
    if (number == 0) {
        return 1;
    }
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<< " Enter your number: " << endl;
    cin >> n;
    cout << "The number of digits are: "<< countDigits(n);
}



// int main() {
//     int number;
//     cout << "Enter an integer: ";
//     cin >> number;
//     int digits = countDigits(number);
//     cout << "Number of digits: " << digits << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// #define myFunc main
// void myFunc(){
//     cout<<"hii";
   
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 50;
//     long long t1 = 2;
//     long long t2;


//     for(int i = 2; i< n; i++){
//         t2 = t1;
//         cout << t2 << endl;
//         t1 = (t1 * 3) + 1;
//     }

//     return 0;
// }
