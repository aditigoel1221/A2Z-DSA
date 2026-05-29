// Inverted Right Pyramid Pattern
// Given a number N, print the pattern for N using stars and spaces. The pattern is

class Solution {
public:
    void pattern5(int n) {
        for(int i = n ; i>=1 ; i--){
            for(int j = i ; j>=1; j--){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
};