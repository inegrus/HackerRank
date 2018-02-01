

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int n;

int getWays(vector < int > squares, int d, int m){
    // Complete this function
    int sum[105];
    int count=0;
    sum[0]=0;
    for(int i=0;i<n;i++)sum[i+1]=sum[i]+squares[i];
    for(int i=0;i<=n-m;i++){
        if(sum[i+m]-sum[i]==d){
            count++;
        }
    }
    return count;
}

vector <int> s(100);

int main() {
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
        cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;

    int result = getWays(s, d, m);
    cout<<result<<endl;
    return 0;
}

