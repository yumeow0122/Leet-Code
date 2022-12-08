#included <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;

        while (x) {
            int cur = x % 10;
            x /= 10;

            if(result > INT_MAX / 10 || result < INT_MIN / 10) return 0;

            result = result * 10 + cur;
        }
        

        return result;
    }
};

int main(){

    return 0;
}