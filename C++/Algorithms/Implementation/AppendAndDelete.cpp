//
//  AppendAndDelete.cpp
//  Algoritmi
//
//  Created by Ioana on 2/16/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    int k, nrs1, nrs2, steps;
    
    cin >> s >> t >> k;
    
    nrs1 = s.length();
    nrs2 = t.length();
    
    if ( k >= nrs1 + nrs2) {
        cout << "Yes\n";
        return 0;
    }
    
    //   cout << nrs1 << '\n' << nrs2 << '\n';
    int i;
    for (i = 0; i < min(nrs2, nrs1); i++) {
        if (s[i] != t[i]) {
            break;
        }
    }
    steps = i;
    // cout << steps << '\n';
    
    nrs1 = nrs1 - steps;
    nrs2 = nrs2 - steps;
    
    // cout << nrs1 << '\n' << nrs2 << '\n';
    
    if ( nrs1 + nrs2 > k)
        cout << "No\n";
    else
        if (nrs1 + nrs2 == k)
            cout << "Yes\n";
        else
            if (nrs1 + nrs2 < k && (k - nrs1 -nrs2) % 2 == 0)
                cout << "Yes\n";
            else cout << "No\n";
    
    return 0;
}
