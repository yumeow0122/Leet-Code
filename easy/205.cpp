#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        map<char, int> mp1, mp2;
        for(int i=0; i < s.size(); i++){
            if(mp1[s[i]] != mp2[t[i]]) return false;
            mp1[s[i]] = i+1, mp2[t[i]] = i+1;
        }
        return true;
    }
};

int main(){
    Solution solution;
    string str1 = "tee", str2 = "bee";

    cout << solution.isIsomorphic(str1, str2) << endl;

    return 0;
}
