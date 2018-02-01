//
//  MigratoryBirds.cpp
//  Algoritmi
//
//  Created by Ioana on 3/26/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector <int> V(5);

int main(){
    int n,x;
    cin >> n;
    for(int types_i = 0; types_i < n; types_i++){
        cin >> x;
        V[x]++;
    }
    // your code goes here
    int max = -1, max2 = -1;
    int i;
    for ( i = 4; i >= 0; i--) {
        if(V[i] >= max){
            max = V[i];
            max2 = i;
        }
    }
    
    cout << max2;
    
    return 0;
}
