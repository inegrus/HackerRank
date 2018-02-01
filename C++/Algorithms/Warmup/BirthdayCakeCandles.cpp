#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
        cin >> height[height_i];
    }
    sort(height.begin(), height.end());
    
    int nr = 1;
    int i = n-1;
    while(height[i] == height[i-1]){
        nr++;
        i--;
    }
    
    cout<<nr;
    return 0;
}
