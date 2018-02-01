//
//  PickingNumbers.cpp
//  Algoritmi
//
//  Created by Ioana on 10/05/2017.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cstdio>

using namespace std;

// bool myfunction (int i, int j) { return (i<j); }

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    
    sort(a.begin(), a.end());
    
    vector <int> b(n-1);
    for (int b_i = 0; b_i < n - 1; b_i++) {
        b[b_i] = abs(a[b_i] - a[b_i + 1]);
    }
    
    int i = 0;
    int nr = n-2;
    while(abs(a[i] - a[n]) > 1) {
        if( b[i] > b[nr]){
            b.erase(b.begin());
            nr--;
            
        }
        else if (b[i] < b[nr])
        {
            b.pop_back();
            nr--;
        }
        else break;
    }
    
    cout << b.size() << '\n';
    
    return 0;
}
