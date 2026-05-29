// Problem Link: https://www.codingninjas.com/codestudio/problems/rectangular-star-pattern_893110?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

class Solution {
public:
    void pattern2(int n) {
        for(int i = 1; i <=n ; i++){
            for(int j = 1 ; j<=i ; j++){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
};