#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int spos = 0, sneg = 0, szero = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
        spos += (arr[arr_i] > 0);
        sneg += (arr[arr_i] < 0);
        szero += (arr[arr_i] == 0);
    }
    
    printf("%f\n%f\n%f\n", (double) spos / n, (double) sneg / n, (double) szero / n);
    
    
    return 0;
}
