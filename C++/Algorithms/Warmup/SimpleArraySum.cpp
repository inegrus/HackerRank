#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, sum = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++) {
        cin >> arr[arr_i];
    }
    
    for(int arr_j = 0; arr_j < n; arr_j++) {
        sum += arr[arr_j];
    }
    
    cout << sum << '\n';
    
    return 0;
}
