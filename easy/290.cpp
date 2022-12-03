#include <bits/stdc++.h>

using namespace std;

/*

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> p2i;
        unordered_map<string, int> w2i;
        
        istringstream in(s); string word;
        int i = 0, n = pattern.size();

        
        for(word; in>>word; i++){
            if(i==n || p2i[pattern[i]] != w2i[word]) return false; //If it reaches end before all the words in string 's' are traversed || if values of keys : pattern[i] & word don't match return false
            
            p2i[pattern[i]] = w2i[word] = i+1; //Otherwise map to both to a value i+1
        }
        return i==n; //both the lengths should be equal
    }
};

*/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> ump1;
        unordered_map<string, int> ump2;

        stringstream ss(s);
        string word;

        int i = 0;
        for(; ss >> word; i++){
            if(i == pattern.length() || ump1[pattern[i]] != ump2[word]) return false;

            ump1[pattern[i]] = i+1;
            ump2[word] = i+1;
        }
        return i == pattern.length();
    }
};

int main(){
    Solution solution;

    string str1 = "abb";
    string str2 = "dog dog cat ";

    cout << solution.wordPattern(str1, str2) << endl;

    return 0;
}