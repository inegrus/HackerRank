//
//  UtopianTree.cpp
//  Algoritmi
//
//  Created by Ioana on 2/11/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>

using namespace std;

int solve(int cycles) {
    int height = 1;
    for (int i = 1; i <= cycles; i++) {
        if (i % 2 == 0) {
            height += 1;
        }
        else {
            height *= 2;
        }
    }
    return height;
    

}

int main() {
    
    int tests, ncycles;
    
    cin >> tests;
    
    for (int t = 1; t <= tests; t++) {
        cin >> ncycles;
        cout << solve(ncycles) << '\n';
    }
    
    return 0;
}

