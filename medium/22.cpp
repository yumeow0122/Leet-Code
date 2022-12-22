#include <bits/stdc++.h>

using namespace std;

class Solution {
    vector<string> result;
public:
    vector<string> generateParenthesis(int n) {
        _generateParenthesis("", n, n, 0);
        return result;
    }
private:
    void _generateParenthesis(string str, int left, int right, int counter){
        if(counter < 0) return;

        if(left == 0 && right == 0)
            result.push_back(str);

        if(left) _generateParenthesis(str+"(", left-1, right, counter+1);
        if(right) _generateParenthesis(str+")", left, right-1, counter-1);
    }
};

int main(){
    Solution solution;
    vector<string> ans = solution.generateParenthesis(3);

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << endl;
    cout << endl;

    return 0;
}