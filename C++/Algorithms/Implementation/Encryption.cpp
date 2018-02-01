#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int col, row, length, mark = 0;
    
    

    length = s.length();
    col = ceil(sqrt(length));
    row = floor(sqrt(length));
    
    if (row * col < length){
        row++;
    }
    
    int x = 0;
//    char result[row][col];
    vector < vector < char> > result(row,vector < char > (col, 0));
    
    
    for (int i = 0; i < row && x < s.length(); i++) {
        for (int j = 0; j < col && x < s.length(); j++) {
            result[i][j] = s[x];
            x++;
        }
    }
    

   // cout << result[0][0] << result [1][0] << result [2][0] << '\n';
    
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row && result[j][i] != 0; j++) {
            cout << result[j][i];
        }
        cout << ' ';
    }
    
    cout << '\n';
    
    return 0;
}
