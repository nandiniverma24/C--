#include <iostream>
using namespace std;

// void negateArray(int* arr, int index, int n){
//     if(index == n){
//         return;
//     }
//     negateArray(arr, index + 1, n);
//     *(arr + index) = -*(arr + index);
// }

void fill(vector<int>& arr, int index) {
    if (index == arr.size()) {
        return;
    }
    arr[index] = index; 
    fill(arr, index + 1);
    arr[index] = -arr[index]; 
}


int main() {
    
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    fill(arr,1);
    
    for(int i:arr){
        cout<<i;
    }
    
    
//     int n;
//     cin >> n;

//     int arr[100];

//     // Read array elements
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     negateArray(arr, 0, n);

//     // Output the negated array
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] <<endl;
//     }
//     cout << endl;

    return 0;
}
