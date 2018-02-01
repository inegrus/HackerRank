#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    
    int hh = (time[0] - '0') * 10 + (time[1] - '0');
    
    int l = time.length();
    if (time[l - 2] == 'P') {
        if ( hh == 12) {
            cout << time.substr(0, l - 2);
        }
        else {
            cout << hh + 12 << time.substr(2, l - 4);
        }
    }
    else {
        if ( hh == 12) {
            cout << "00" << time.substr(2, l - 4);
        }
        else {
            cout << time.substr(0, l - 2);
        }
    }
    cout << '\n';
    return 0;
}
