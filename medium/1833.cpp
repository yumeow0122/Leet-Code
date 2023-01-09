#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count  = 0;
        
        sort(costs.begin(), costs.end());

        for(auto i: costs){
            coins -= i;
            if(coins < 0) return count;
            count++;
        }

        return count;
    }
};

int main(){
    Solution solution;

    vector<int> costs = {1,3,2,4,1};
    cout << solution.maxIceCream(costs, 7) << endl;


    return 0;
}