class Solution {
public:
    int reverse(int x) {
        //int n = x.size();
        long long  rev =0;
        while(x!=0){
            int rem = x%10;
            rev = rev*10 + rem;
            x = x/10;
        }
        return rev;
    }
};