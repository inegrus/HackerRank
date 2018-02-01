//
//  CatsAndAMouse.cpp
//  Algoritmi
//
//  Created by Ioana on 4/3/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        int x, y, z;
        
        cin >> x >> y >> z;
        
        int difx = abs(z-x);
        int dify = abs(z-y);
        
        if(difx > dify) {
            cout << "Cat B" << '\n';
        }
        else if(difx < dify){
            cout << "Cat A" << '\n';
        }
        else
            cout << "Mouse C" << '\n';
    }
    
    
    return 0;
}
