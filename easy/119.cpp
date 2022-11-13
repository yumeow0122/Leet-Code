#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex+1, 0);

        row[0] = 1; // base case

        for(int i=1; i<=rowIndex; i++)
            for(int j=i; j>=1; j--)
                row[j] = row[j] + row[j-1];

        return row;
    }
};

int main(){
    Solution *solution = new Solution();

    vector<int> ans = solution->getRow(3);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
