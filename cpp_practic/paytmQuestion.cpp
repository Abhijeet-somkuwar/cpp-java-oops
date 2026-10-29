#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int avgOfHighest_lowest(vector<int>& nums, int n){
    int lowest = INT_MAX;
    int highest = INT_MIN;
    int avg;

    for(int i = 0; i < n; i++){
        if(nums[i] < lowest){
            lowest = nums[i];
        }
        if(nums[i] > highest){
            highest = nums[i];
        }
    }
    avg = (highest + lowest) / 2;
    return avg;

}

int main(){
    vector<int> nums;
    int n,ele;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i = 0 ; i<n; i++){
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>ele;
        nums.push_back(ele);
    }
    int ans = avgOfHighest_lowest(nums, n);
    cout << "Average of highest and lowest: " << ans << endl;

    return 0;
}