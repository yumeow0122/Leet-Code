#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cur = s.size() - 1;
        int cnt = 0;
        while(cur >= 0 && s[cur] == ' ') cur--;
        while(cur >= 0 && s[cur] != ' '){
            cnt ++;
            cur --;
        }
        return cnt;
    }
};

int main(){
    string str = "a";

    Solution *solution = new Solution();
    cout << solution->lengthOfLastWord(str) << endl;

    return 0;
}
