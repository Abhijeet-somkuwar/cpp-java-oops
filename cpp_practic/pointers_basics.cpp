#include<iostream>

using namespace std;
void update(int *ptr){
    *ptr += 1;


}
int main(){

/*
//pointers in array:

int arr[10] = {5,23,34,65,38,6,7};

cout<<"Address of first memory block: "<<arr<<endl;
cout<<"Address of first memory block: "<<&arr[0]<<endl;
cout<<"Value at first memory block: "<<*arr<<endl;
cout<<"adding Value at first memory block: "<<*arr + 1<<endl;
cout<<"adding Value at first memory block: "<<(*arr)+ 1<<endl;
cout<<"Value at second memory block: "<<*(arr + 1)<<endl;
cout<<"Printing value at index 2 using * : "<<*(arr + 2)<<endl;
// we got a formula----> arr[i] = *(arr + i);
//also----> i[arr] = *(i + arr);
int i = 2;
cout<<"Printing value at index 2 using formula : "<< i[arr]<<endl;
*/
//-------------------------------------------------------------------------------------------------
// int arr[20] = {1,2,3,4,5};

// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<&arr[0]<<endl;

// int *ptr = &arr[0];

// cout<<ptr<<endl;
// cout<<&ptr<<endl;
// cout<<*ptr<<endl;
// ptr = ptr + 1;
//---------------------------------------------------------------------------------------------------

// int arr[10] = {1,2,3,4,5,6};
// cout<<"Before increment: "<<&arr[0]<<endl;

// int *ptr = &arr[0];
// ptr = ptr + 1;
// cout<<"incrementing address of int using pointer: "<<ptr<<endl;
//---------------------------------------------------------------------------------------------------

//character arrays:
// int arr[10] = {1,2,3,4,5,6};
// char ch[9] = "Abhijeet";

// cout<<arr<<endl;
// cout<<ch<<endl;

// char *c = &ch[0];
// cout<<c<<endl;

//---------------------------------------------------------------------------------------------------
//functions:

// int value = 6;

// int *ptr = &value;
// cout<<"Before: "<<value<<endl;
// update(ptr);
// cout<<"After: "<<value<<endl;

//---------------------------------------------------------------------------------------------------
//double pointers:

// int  i = 5;
// int* ptr1 = &i;
// int** ptr2 = &ptr1;

// cout<<&i<<endl;
// cout<<&ptr1<<endl;
// cout<<ptr2<<endl;
// cout<<*ptr2<<endl;
// cout<<**ptr2<<endl;
//---------------------------------------------------------------------------------------------------
//functions in double pointer:




return 0;
}

