//
//  EqualizeTheArray.cpp
//  Algoritmi
//
//  Created by Ioana on 2/23/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector <int> v (101);

int main() {
    
    int n, i, nr, aux = 0;
    
    cin >> n;
    for (i = 0; i < 5; i++) {
        cin >> nr;
        v[nr]++;
    }
    
    for (i = 0; i < 101; i++) {
        if (aux < v[i]) {
            aux = v[i];
        }
    }
    
    cout << n - aux << '\n';
    
    return 0;
}
