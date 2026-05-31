// Binary Number Triangle Pattern
// Given a number N, print the pattern for N using 1's and 0's. The pattern is as follows:
// For N = 5

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                if( (i+j) % 2 == 0){
                    cout<<"1";
                }
                else{
                    cout<<"0";
                }
            }
            cout << "\n";
        }
    }
};

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    Solution obj;
    obj.pattern(n);

    return 0;
}