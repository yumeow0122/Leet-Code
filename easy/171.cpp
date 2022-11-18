#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int titleToNumber(string str) {
        int num = 0;
        double base = 1;
        for(int i = str.size()-1; i>=0; i--){
            num += (str[i]-64) * base;
            base *= 26;
        }
        return num;
    }
};

int main(){
    Solution *solution = new Solution();

    string str = "FXSHRXW";
    cout << solution->titleToNumber(str) << endl;

    return 0;
}
