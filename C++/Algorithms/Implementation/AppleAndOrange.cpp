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
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    int mar, portocala, smar = 0, sportocala = 0;
    
    for(int apple_i = 0;apple_i < m;apple_i++){
        cin >> mar;
        mar += a;
        if ( mar >= s && mar <= t) {
            ++smar;
        }
    }
    for(int orange_i = 0;orange_i < n;orange_i++){
        cin >> portocala;
        portocala += b;
        if ( portocala >= s && portocala <= t) {
            ++sportocala;
        }
    }
    
    cout << smar << '\n' << sportocala << '\n';
    return 0;
}
