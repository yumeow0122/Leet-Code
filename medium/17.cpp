#include <bits/stdc++.h>

using namespace std;

class Solution {
    vector<string> result;
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return result;

        _dfs(digits, "", 0);
        return this->result;
    }

private:
    void _dfs(string digits,string path, int index){
        if(index == digits.size()){
            result.push_back(path);
            return;
        }
        vector<string> letters= _mapping(digits[index]);
        for(auto i:letters){
            _dfs(digits, path+i, index+1);
        }
    }

    vector<string> _mapping(char c){
        switch (c){
            case '0': return {};
            case '1': return {};
            case '2': return {"a","b","c"};
            case '3': return {"d","e","f"};
            case '4': return {"g","h","i"};
            case '5': return {"j","k","l"};
            case '6': return {"m","n","o"};
            case '7': return {"p","q","r","s"};
            case '8': return {"t","u","v"};
            case '9': return {"w","x","y","z"};
            default: return {};
        }
    }
};

int main(){
    Solution solution;
    string str = "234";

    vector<string> vec = solution.letterCombinations(str);
    for(int i = 0; i<vec.size(); i++)
        cout << vec[i] << endl;
    
    cout << vec.size() << endl;

    return 0;
}