#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        int base = 65;
        string str;
        while(columnNumber){
            columnNumber--;
            str += char(base + columnNumber%26);
            columnNumber /= 26;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};

int main(){
    Solution *solution = new Solution();
    cout << solution->convertToTitle(366);

    return 0;
}
