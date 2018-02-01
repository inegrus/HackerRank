//
//  AngryProfessor.cpp
//  Algoritmi
//
//  Created by Ioana on 2/13/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void solve(int n, int k) {
   
    int student, late = 0, ontime = 0;
    
    for (int i = 0; i < n; i++) {
        
        cin >> student;
        if (student <= 0) {
            ontime++;
        }
        else {
            late++;
        }
    }
    
    if (ontime < k) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}


int main() {
    
    int t, n, k;
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        solve(n, k);
    }
    
    return 0;
}
