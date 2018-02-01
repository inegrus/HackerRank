//
//  CutTheSticks.cpp
//  Algoritmi
//
//  Created by Ioana on 2/22/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <vector>


using namespace std;

vector <int> v(1001);

int main () {
    
    int n, x;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[x]++;
    }
    
    for (int i = 0; i <= 1000; i++) {
        if (v[i] != 0) {
            cout << n << '\n';
            n = n - v[i];
        }
    }
    
    
    return 0;
}
