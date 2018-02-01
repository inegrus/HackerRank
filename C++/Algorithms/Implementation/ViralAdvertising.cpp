//
//  ViralAdvertising.cpp
//  Algoritmi
//
//  Created by Ioana on 2/15/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n, m = 5, i, nrlikes = 0;
    
    cin >> n;
    
    while (i < n) {
        nrlikes += floor(m / 2);
        m = floor(m / 2) * 3;
        n--;
    }
    
    cout << nrlikes << '\n';
    
    return 0;
}
