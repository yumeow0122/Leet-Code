#include <bits/stdc++.h>

using namespace std;

bool isBadVersion(int version){
    return version == 4;
}

class Solution{
public:
    int firstBadVersion(int n) {
        return this->_badVersion(0, n);
    }

private:
    int _badVersion(int head, int tail) {
        int mid = head + (tail - head) / 2;

        if(mid == tail) return tail;
        
        if (isBadVersion(mid))
            return _badVersion(head, mid);
        else
            return _badVersion(mid+1, tail);
    }
};

int main(){
    Solution solution;

    cout << solution.firstBadVersion(5) << endl;
    return 0;
}