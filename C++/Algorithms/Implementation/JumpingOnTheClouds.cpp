//
//  JumpingOnTheClouds.cpp
//  Algoritmi
//
//  Created by Ioana on 2/23/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector <int> v(100);

int main () {
    int n, i, res = 0;
    
    
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (i = 0; i < n-1; res++) {
        if (i + 2 < n && v[i + 2] == 0) {
            i += 2;
        }
        else {
            i += 1;
        }
    }
    
    cout << res << '\n';
    
    
    
    return 0;
}
