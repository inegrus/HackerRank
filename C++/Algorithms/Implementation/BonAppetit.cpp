//
//  BonAppetit.cpp
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
    
    int n, k, i, ccerut, ccorect, sum = 0;
    
    cin >> n >> k;
    
    vector <int> v(n);
    
    for (i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    cin >> ccerut;
    
    ccorect = (sum - v[k]) / 2;
    
    if (ccerut > ccorect) {
        cout << ccerut - ccorect << '\n';
    }
    else {
        cout << "Bon Appetit\n";
    }
    
    return 0;
}
