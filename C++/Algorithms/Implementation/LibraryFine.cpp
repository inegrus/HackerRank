//
//  LibraryFine.cpp
//  Algoritmi
//
//  Created by Ioana on 2/18/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int zi, luna, an, fine = 0;
    int zilate, lunalate, anlate;
    
    cin >> zilate >> lunalate >> anlate;
    cin >> zi >> luna >> an;
    
    if (an < anlate) {
        cout << 10000 << '\n';
        return 0;
    }
    if (an == anlate && lunalate > luna) {
        cout << 500 * (lunalate - luna) << '\n';
        return 0;
    }
    if (an == anlate && lunalate == luna && zilate > zi) {
        cout << 15 * (zilate - zi) << '\n';
        return 0;
    }
    cout << 0 << '\n';
    
    
    return 0;
}
