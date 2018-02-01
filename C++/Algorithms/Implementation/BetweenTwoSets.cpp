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
    int n;
    int m, nr = 0;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    sort(a.begin(), a.end());
    int amax = a[n - 1];
    
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
        cin >> b[b_i];
    }
    
    sort(b.begin(), b.end());
    int bmin = b[0], j;
    
    for (int i = amax; i <= bmin; i++) {
        for (j = 0; j < n; j++) {
            if (i % a[j] != 0) {
                break;
            }
        }
        if (j < n) {
            continue;
        }
        for (j = 0; j < m; j++) {
            if (b[j] % i != 0) {
                break;
            }
        }
        if (j < m) {
            continue;
        }
        nr++;
    }
    
    cout << nr << '\n';
    
    return 0;
}
