//
//  SherlockAndSquares.cpp
//  Algoritmi
//
//  Created by Ioana on 2/18/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int square(int a, int b) {
    int ans = 0, ra, rb;
    
    ra = sqrt(a);
    rb = sqrt(b);
    
    ans = rb - ra + 1;
    
    if (ra * ra != a) {
        ans --;
    }

    return ans;
}

int main() {
    int t, a, b;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << square(a, b) << '\n';
        
    }
    
    
    return 0;
}
