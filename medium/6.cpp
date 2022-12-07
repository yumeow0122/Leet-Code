#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {

	    if (numRows > s.length() || numRows==1) {
		    return s;
	    }
    
        vector<string> trans(numRows);
        int cur = 0;
        int d = -1;
        for(int i = 0; i < s.size(); i++){
            //cout << cur << " ";
            trans[cur] += s[i];
            d = (cur == 0 || cur == (numRows - 1)) ? -d : d;
            cur += d;
        }

        string result = "";
        for(string t: trans){
            result += t;
        }
        return result;
    }
};

int main(){
    Solution solution;
    string  str = "PAYPALISHIRING";
    cout << solution.convert(str, 4) << endl;
    return 0;
}