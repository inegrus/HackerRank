//
//  BeautifulDaysAtTheMovies.cpp
//  Algoritmi
//
//  Created by Ioana on 2/13/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int reversed(int x) {
    
    int rx = 0;
    while(x != 0) {
        rx = rx * 10 + x % 10;
        x = x / 10;
    }
    //cout << rx;
    
    return rx;
}



int main() {
    int i, j, k, sum = 0;
    
    cin >> i >> j >> k;
    
    for(int n = i; n <= j; n++) {
        if(abs(n - reversed(n)) % k == 0)
            sum++;
    }
    
    cout << sum << '\n';
    return 0;
}
