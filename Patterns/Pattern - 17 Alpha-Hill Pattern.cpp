// Alpha-Hill Pattern
// Given a number N, print the pattern for N using alphabets and spaces. The pattern is as follows:

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {

        for(int i = 1; i <= n; i++) {
            //space
            for(int j = 1; j <= n-i; j++){
                cout<<" ";
            }
            char m = 'A';
            for(int j = 1; j <= i; j++) {
                cout<<m;
                m++;
            }
            m=m-2;
            for(int j = 1; j <= i-1; j++) {
                cout<<m;
                m--;
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