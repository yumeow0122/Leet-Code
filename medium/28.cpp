#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int result = -1;
        int i, j;
        for(i=0; i<haystack.size(); i++){
            for(j=0; j<needle.size(); j++){
                if(haystack[i+j] != needle[j]) break;
            }
            if(j == needle.size()){
                result = i;
                break;
            }
        }
        return result;
    }
};

int main(){
    string haystack = "sadbutsad";
    string needle = "sad";

    Solution solution;
    cout << solution.strStr(haystack, needle) << endl;
    return 0;
}