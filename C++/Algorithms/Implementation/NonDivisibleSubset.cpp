//
//  NonDivisibleSubset.cpp
//  Algoritmi
//
//  Created by Ioana on 2/26/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector <int> v(100);

int main() {
    
    int n, k, x;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[x % k]++;
    }
    
    int rez = 0;
    
    for (int i = 1; i < (k + 1) / 2; i++) {
        rez += max(v[i], v[k - i]);
    }
    
    if (v[0] != 0) {
        rez++;
    }
    
    if (k % 2 == 0 && v[k / 2] != 0) {
        rez++;
    }
    
    cout << rez << '\n';
    
    
    return 0;
}
