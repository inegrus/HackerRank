//
//  ExtraLongFactorials.cpp
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

void big_multiply(vector<int> &v, int x) {
    int i, carrier = 0;
    
    for (i = 0; i < v.size(); i++) {
        int aux = v[i] * x;
        carrier = aux + carrier;
        v[i] = carrier % 10;
        carrier /= 10;
    }
    
    while (carrier != 0) {
        v.push_back(carrier % 10);
        carrier /= 10;
    }
    
}

int main() {
    int n;
    
    cin >> n;
    
    v.push_back(1);
    for (int i = 2; i <= n; i++) {
        big_multiply(v, i);
    }
    
    for (int i = (int) v.size() - 1; i >= 0; i--) {
        cout << v[i];
    }
    
    cout << '\n';
    
    return 0;
}
