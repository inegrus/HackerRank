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

using namespace std;


int main(){
    int x1; // unde se afla primu kangur
    int v1; // cu cat sare primul k
    int x2; // unde se afla al II lea kangur
    int v2; // cu cat sare al II lea
    cin >> x1 >> v1 >> x2 >> v2;
    
    if ((x2 > x1 && v2 > v1) || (x2 < x1 && v2 < v1)) {
        cout << "NO\n";
        return 0;
    }
    int difdist;
    
    difdist = abs(x1 - x2);
    
    if (v1 != v2 && difdist % abs(v1 - v2) == 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    
    return 0;
}
