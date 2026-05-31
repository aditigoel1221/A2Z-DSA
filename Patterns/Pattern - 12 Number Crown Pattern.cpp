// Number Crown Pattern
// Given a number N, print the pattern for N using numbers and spaces. The pattern is as follows:

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        int m = 2*n - 2;
        for(int i = 1; i <= n; i++) {
            //number
            for(int j = 1; j <= i; j++) {
                cout<<j;
                }
            //gap
            for(int j =1; j<=m ; j++){
                cout<<" ";
            }
            //number
            for(int j = 1; j <= i; j++) {
                cout<<j;
            }
            m=m-2;
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