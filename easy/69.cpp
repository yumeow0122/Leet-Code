#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int mySqrt(int x) {
        long _r = x;
        while (_r*_r > x)
            _r = (_r + x/_r) / 2;
        return _r;
    }
};

int main(){
    int a = 4, b = 8;

    Solution *solution = new Solution();
    cout << solution->mySqrt(a) << endl;
    cout << solution->mySqrt(b) << endl;

    return 0;
}
