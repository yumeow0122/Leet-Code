#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0; i<s.size(); i++)
            if(isalpha(s[i]) || isdigit(s[i])) str += tolower(s[i]);

        int h = 0, t = str.size()-1;
        while(h <= t){
            if(str[h] != str[t]) return false;
            h++, t--;
        }
        return true;
    }
};

int main(){
    Solution *sol = new Solution();

    string str = "race a car";

    cout << sol->isPalindrome(str) << endl;
}
