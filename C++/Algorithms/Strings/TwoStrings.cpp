//
//  TwoStrings.cpp
//  Algoritmi
//
//  Created by Ioana on 14/06/2017.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <bool> V1(26);

int main()
{
    int n, j;
    string a,b;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        for (int j = 0; j < a.length(); j++) {
            V1[a[j] - 'a'] = true;
        }
        for (j = 0; j < b.length(); j++) {
            if(V1[b[j] - 'a']){
                cout << "YES\n";
                break;
            }
        }
        if (j == b.length()) {
            cout << "NO\n";
        }
//        for (int j = 0; j < 26; j++) {
//            V1[j] = 0;
//        }
//        for(auto &x: V1){
//            x = 0;
//        }
        fill(V1.begin(), V1.end(), 0);
    }
    
    return 0;
}
