// Half Diamond Star Pattern
// Given a number N, print the pattern for N using stars. The pattern is as follows:

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << "\n";
        }
        
        for(int i = n-1; i >= 1; i--) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
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