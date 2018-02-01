//
//  JumpingOnTheCloudsRevisited.cpp
//  Algoritmi
//
//  Created by Ioana on 2/16/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector <int> v;

int main() {
    
    int n, k, e = 100;
    
    cin >> n >> k;
    
    v.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int i = 0;
    
    do {
        i = (i + k) % n;
        e = e - 1 - 2 * v[i];
        
    } while (i != 0);
    
    cout << e << '\n';
    
    return 0;
}
