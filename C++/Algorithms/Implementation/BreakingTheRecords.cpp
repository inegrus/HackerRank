#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int nrbreaks, minscore, nrdecrease, maxscore;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
        cin >> score[score_i];
    }
    // your code goes here
    nrbreaks = nrdecrease = 0;
    minscore = maxscore = score[0];
    for(int score_i = 1; score_i < n; score_i++){
        if (score[score_i] > maxscore) {
            nrbreaks++;
            maxscore = score[score_i];
        }
        if (score[score_i] < minscore) {
            minscore = score[score_i];
            nrdecrease++;
        }
    }
    
    cout << nrbreaks << ' ' << nrdecrease;
    
    return 0;
}
