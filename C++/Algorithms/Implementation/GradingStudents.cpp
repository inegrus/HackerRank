//
//  GradingStudents.cpp
//  Algoritmi
//
//  Created by Ioana on 4/3/17.
//  Copyright © 2017 Ioana. All rights reserved.
//

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        // your code goes here
        int x = grade;
        while(x % 5 != 0){
            x++;
        }
        if((x - grade ) < 3 && x >= 40){
            cout << x << '\n';
        }
        else {
            cout << grade << '\n';
        }
        
    }
    return 0;
}
