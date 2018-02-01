//
//  TaumAndBDay.cpp
//  Algoritmi
//
//  Created by Ioana on 2/23/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    
    long long t, x, y, z, nrb = 0, nrw = 0, w, b;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> b  >> w >> x >> y >> z;
        if (x >= y + z) {
            nrb = y + z;
        }
        else {
            nrb = x;
        }
        
        if (y >= x + z) {
            nrw = x + z;
        }
        else {
            nrw = y;
        }
        cout << nrb * b + nrw * w << '\n';
    }
    
    
    return 0;
}
