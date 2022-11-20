#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        while(n){
            int sum = 0;
            while(n){
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            //cout << n << " " << sum << endl;
            if(sum == 1 || sum == 7) return true;
            else if(sum /10 == 0) return false;
            n = sum;
        }
        return n == 1;
    }
};

int main(){
    int n = 1111111;
    Solution solution;
    cout << solution.isHappy(n);

    return 0;
}
