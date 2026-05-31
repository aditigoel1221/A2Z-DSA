#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        char m = 'A';
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout<<m;
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
    obj.pattern(n);

    return 0;
}