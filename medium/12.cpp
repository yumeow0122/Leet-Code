#include <bits/stdc++.h>

using namespace std;

class Solution {
    string result;
public:
    string intToRoman(int num) {
        _trans(num, "M", 1000);
        _trans(num, "CM", 900);
        _trans(num, "D", 500);
        _trans(num, "CD", 400);
        _trans(num, "C", 100);
        _trans(num, "XC", 90);
        _trans(num, "L", 50);
        _trans(num, "XL", 40);
        _trans(num, "X", 10);
        _trans(num, "IX", 9);
        _trans(num, "V", 5);
        _trans(num, "IV", 4);
        _trans(num, "I", 1);
        return this->result;
    }

private:
    void _trans(int &num, string token, int base){
        int count = num/base;
        while (count--){
            this->result += token;
        }
        num %= base;
    }
};

int main(){
    Solution solution;

    cout << solution.intToRoman(10) << endl;  

    return 0;
}