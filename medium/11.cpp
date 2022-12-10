#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            water = max(water, (j - i) * h);
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
        }
        return water;
    }
};

int main()
{
    Solution solution;
    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << solution.maxArea(vec) << endl;
    return 0;
}