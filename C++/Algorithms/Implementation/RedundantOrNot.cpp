//
//  compet_RedundantOrNot.cpp
//  Algoritmi
//
//  Created by Ioana on 14/05/2017.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

set <int> S;
set <int> :: iterator it;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        it = S.find(x);
        if(it == S.end()) {
                S.insert(x);
                cout << "ADDED\n";
        }
        else {
            cout << "REDUNDANT\n";
        }
    }
    return 0;
}
    

