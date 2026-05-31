// https://www.codingninjas.com/codestudio/problems/diamond-star-pattern_893352?leftPanelTab=0

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        int m = n-1;
        for(int i=1 ; i <= n; i++) {
            for(int j = m; j >= 1; j--) {
                cout << " ";
            }
            for(int j = 1; j <= 2*i-1; j++) {
                cout << "*";
            }
            m--;
            cout << "\n";
        }
        
        
        
        int p = 1;
        for(int i = n; i >= 1; i--) {
            for(int j = 1; j <= p - 1; j++) {
                cout << " ";
            }
            for(int j = 2 * i - 1; j >= 1; j--) {
                cout << "*";
            }
            p++;
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