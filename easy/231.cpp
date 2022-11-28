#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n && !(n & n-1);
    }
};

int main(){
    Solution solution;

    cout << solution.isPowerOfTwo(5) << endl;
}
