#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(int i = 0; i < t.size(); i++) {
            if(mp[t[i]]) return false;
        }
        return true;
    }
};

int main(){
    string str1 = "rat";
    string str2 = "car";
    Solution solution;
    cout << solution.isAnagram(str1, str2) << endl;
    return 0;
}