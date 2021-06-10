#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; 
    cin >> n;

    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }
    cout << count;
    
    return 0;
}
