#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        if(n == 1) return result;

        n--;
        while(n--) {
            int strLen = result.size();
            int chCount = 1;
            char ch = result[0];
            string curStr = "";
            for(int i = 1; i < strLen; i++) {
                if(ch == result[i]) {
                    chCount++;
                }
                else {
                    curStr += to_string(chCount) + ch;

                    chCount = 1;
                    ch = result[i];
                }
            }
            curStr += to_string(chCount) + ch;

            result = curStr;
        }
        return result;
    }
};

int main(){
    Solution solution;

    cout << solution.countAndSay(4) << endl;
    return 0;
}