// Hollow Rectangle Pattern
// Given a number N, print the pattern for N using stars and spaces. The pattern is as follows:

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i =1;i<=n;i++){
            cout<<"*";
        }
        cout<<"\n";
        for(int i = 1; i <= n-2; i++) {
            cout<<"*";
            //gap
            for(int j =1; j<=n-2 ;j++){
                cout<<" ";
            }
            cout<<"*";
            cout << "\n";
        }
        for(int i =1;i<=n;i++){
            cout<<"*";
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