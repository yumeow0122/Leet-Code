#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int weight = 0;
        while(n){
            if(n & 1) weight++;
            n = n >> 1;
        }
        return weight;
    }
};

int main(){
    Solution *solution = new Solution();

    uint32_t num = 3;

    cout << solution->hammingWeight(num);

    return 0;
}
