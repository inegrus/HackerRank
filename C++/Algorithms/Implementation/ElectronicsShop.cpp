#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    
    
    
    for(int keyboards_i = 0;keyboards_i < n;keyboards_i++){
        cin >> keyboards[keyboards_i];
    }
    
    vector<int> pendrives(m);
    for(int pendrives_i = 0;pendrives_i < m;pendrives_i++){
        cin >> pendrives[pendrives_i];
    }
    
    int i, j;
    int max = 0;
    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){
            if(keyboards[i] + pendrives[j] >= max && keyboards[i] + pendrives[j] <= s){
                max = keyboards[i] + pendrives[j];
            }
        }
    }
    if(max == 0)
        cout << -1;
    else
        cout << max;
    return 0;
}
