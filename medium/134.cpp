#include <bits/stdc++.h>

using namespace std;





int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    Solution solution;
    cout << solution.canCompleteCircuit(gas, cost) << endl;
    return 0;
}