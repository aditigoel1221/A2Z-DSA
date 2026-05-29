// Inverted Numbered Right Pyramid Pattern
// Given a number N, print the pattern for N using numbers and spaces. The pattern is

class Solution {
public:
    void pattern6(int n) {
        for(int i = n ; i>=1 ; i--){
            for(int j = 1 ; j<=i; j++){
                cout<< j;
            }
            cout<<"\n";
        }
    }
};