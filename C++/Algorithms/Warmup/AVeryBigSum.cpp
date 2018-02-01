//
//  AVeryBigSum.cpp
//  Algoritmi
//
//  Created by Ioana on 2/8/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    long long sum = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
        sum += arr[arr_i];
    }
    cout << sum;
    return 0;
}
