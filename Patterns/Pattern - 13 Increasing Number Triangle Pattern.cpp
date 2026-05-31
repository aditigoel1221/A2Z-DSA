// Increasing Number Triangle Pattern
// Given a number N, print the pattern for N using numbers and spaces. The pattern is as follows:

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        int m=1;
        for(int i = 1; i <= n; i++) {
            //number
            for(int j = 1; j <= i; j++) {
                cout<<m;
                m++;
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