// The Number Pattern
// Given a number N, print the pattern for N using numbers and spaces. The pattern is as follows:

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i =0;i<2*n-1;i++){
            for(int j = 0;j<2*n-1;j++){
                 int top = i;
                int left = j;
                int bottom = (2 * n - 2) - i;
                int right = (2 * n - 2) - j;
                int minDist = min(min(top, bottom), min(left, right));
                cout << (n - minDist) << " ";
            }
            cout<<"\n";
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