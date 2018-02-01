//
//  FindDigits.cpp
//  Algoritmi
//
//  Created by Ioana on 2/16/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>

using namespace std;

int calculate(int nr) {
    int ans = 0, c, aux = nr;
    
    while (aux != 0) {
        c = aux % 10;
        aux = aux / 10;
        
        if (c != 0) {
            if (nr % c == 0) {
                ans++;
            }
        }
    }
    
    return ans;
}



int main() {
    
    int n, t, i;
    
    cin >> t;
    
    for (i = 0; i < t; i++) {
        cin >> n;
        cout << calculate(n) << '\n';
    }
    
    return 0;
}
