//
//  SuperReducedString.cpp
//  Algoritmi
//
//  Created by Ioana on 02/06/2017.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <string>
#include <iostream>
#include <deque>

using namespace std;

int main() {
    char c;
    
    c = getchar();
    deque<char> deq;
    while (c != -1 && c != '\n') {
        if(deq.empty() || c != deq.back()) {
            deq.push_back(c);
        }
        else {
            deq.pop_back();
        }
        c = getchar();
    }
    
    if (deq.size() == 0) {
        cout << "Empty String\n";
    }
    while (deq.size()) {
        cout << deq.front();
        deq.pop_front();
    }
    cout << '\n';
    
    
    return 0;
}

