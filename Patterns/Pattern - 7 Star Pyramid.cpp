// https://www.codingninjas.com/codestudio/problems/star-pyramid_893351?leftPanelTab=0

class Solution {
public:
    void pattern7(int n) {
        int m = n-1;
        for(int i = 1; i<= n ; i++){
            for(int j = m;j>=1;j--){
                cout<<" ";
            }
            for(int j =1 ; j<= (2*i -1) ; j++){
                cout<<"*";
            }
            m--;
            cout<<"\n";
        }
    }
};