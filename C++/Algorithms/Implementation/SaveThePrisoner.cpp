//
//  SaveThePrisoner.cpp
//  Algoritmi
//
//  Created by Ioana on 2/15/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int save_prisioner(int n, int m, int s) {
    int stop, steps;
    
    steps = m % n;
    stop = s + steps - 1;
    
    if (stop > n) {
        stop -= n;
    }
    
    if (stop == 0) {
        stop = n;
    }
    
    return stop;
}



int main() {
    int t, n, m, s;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> n >> m >> s;
         cout << save_prisioner(n, m, s) << '\n';
    }
    
    return 0;
    
}
