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
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
        cin >> h[h_i];
    }
    string word;
    cin >> word;
    
    int maxheight = 0, i;
    
    for (i = 0; i < word.length(); i++) {
        if (maxheight < h[word[i] - 'a']) {
            maxheight = h[word[i] - 'a'];
        }
    }
    
    cout << maxheight * word.length() << '\n';
    
    return 0;
}
