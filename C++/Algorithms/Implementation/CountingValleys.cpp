//
//  CountingValleys.cpp
//  Algoritmi
//
//  Created by Ioana on 4/3/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, up = 0, down = 0;
    string x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin >> n;
    cin >> x;
    for(int i = 0; i < n; i++){
        if( x[i] == 'U'){
            up++;
        }
        else {
            down--;
        }
    }
    
    int res = up/down;
    
    cout << res;
    return 0;
}
