#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int cur = digits.size() - 1;
        digits[cur] ++;

        while(cur >= 0 && digits[cur] >=10){
            digits[cur] = 0;
            if(cur == 0){
                digits.insert(digits.begin(), 1);
            }
            else{
                digits[--cur] ++;
            }
        }
        return digits;
    }

    void test(vector<int> &vec){
        vector<int> _vec = plusOne(vec);
        for(auto it=_vec.begin(); it!=_vec.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
};

int main(){
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 3, 2, 1};
    vector<int> vec3 = {9};

    Solution *solution = new Solution();

    solution -> test(vec1);
    solution -> test(vec2);
    solution -> test(vec3);

    return 0;
}
