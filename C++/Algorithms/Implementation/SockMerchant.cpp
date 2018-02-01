//
//  SockMerchant.cpp
//  Algoritmi
//
//  Created by Ioana on 2/11/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, nrperechi = 0, s;
    vector <int> v(101, 0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        v[s]++;
    }
    
    for (int i = 0; i <= 100; i++) {
        nrperechi += v[i] / 2;
    }
    
    cout << nrperechi << '\n';
    
    return 0;
}
