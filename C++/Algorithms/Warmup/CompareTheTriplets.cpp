//
//  CompareTheTriplets.cpp
//  Algoritmi
//
//  Created by Ioana on 2/8/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    int a = 0, b = 0;
    
    a = (a0 > b0) + (a1 > b1) + (a2 > b2);
    b = (a0 < b0) + (a1 < b1) + (a2 < b2);
    
    cout << a << ' ' << b << '\n';


    
    
    return 0;
}

