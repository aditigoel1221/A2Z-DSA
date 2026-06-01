#include <iostream>
using namespace std;

class Solution {
public:
    void countDigits(int n) {
        int i = 1;
        while(n>=10){
            n = n /10;
            i++;
        }
        cout<<i;
        //int i = (int)(log10(n)+1);
    }
};

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    Solution obj;
    obj.countDigits(n);

    return 0;
}