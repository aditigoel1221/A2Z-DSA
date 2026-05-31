// Symmetric Void Pattern
// Given a number N, print the pattern for N using stars and spaces. The pattern is as follows:

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        //UPPER
        int m =1;
        for(int i = n; i >= 1; i--) {
            //upper left
            for(int j =i;j>=1;j--){
                cout<<"*";
            }
            //gap
            for(int j =1; j<=2*m-2 ;j++){
                cout<<" ";
            }
            //upper right
            for(int j =i;j>=1;j--){
                cout<<"*";
            }
            m++;
            cout << "\n";
        }
        
        //LOWER
        int p =n;
        for(int i = 1; i <= n; i++) {
            //lower left
            for(int j =1;j<=i;j++){
                cout<<"*";
            }
            //gap
            for(int j =1; j<=2*p-2 ;j++){
                cout<<" ";
            }
            //lower right
            for(int j =1;j<=i;j++){
                cout<<"*";
            }
            p--;
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