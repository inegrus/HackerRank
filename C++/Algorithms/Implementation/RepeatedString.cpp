//
//  RepeatedString.cpp
//  Algoritmi
//
//  Created by Ioana on 03/06/2017.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    long int n, nr = 0, n2 = 0;

    
    
    cin >> S >> n;
    
    for (int i = 0; i < S.length(); i++) {
        if(S[i] == 'a'){
            nr++;
        }
    }
    
    for (int i = 0; i < n % S.length(); i++) {
        if(S[i] == 'a')
            n2++;
    }
    
    cout << (n / S.length()* nr + n2);

   
    
    return 0;
}
