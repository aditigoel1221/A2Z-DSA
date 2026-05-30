// https://www.codingninjas.com/codestudio/problems/reverse-pyramid_893350?leftPanelTab=0

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        int m = 1;
        for(int i = n; i >= 1; i--) {
            for(int j = 1; j <= m - 1; j++) {
                cout << " ";
            }
            for(int j = 2 * i - 1; j >= 1; j--) {
                cout << "*";
            }
            m++;
            cout << "\n";
        }
    }
};

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    Solution obj;
    obj.pattern8(n);

    return 0;
}