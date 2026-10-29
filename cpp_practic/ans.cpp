#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the size of the array

    vector<int> arr(N), result(N);
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];  // Read array elements
    }

    // Rearranging array such that arr[i] = j becomes result[j] = i
    for (int i = 0; i < N; i++) {
        result[arr[i]] = i;
    }

    // Print the rearranged array
    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;

}
