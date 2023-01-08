#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int result = 0;
        for(int i = 0; i < points.size(); i++){
            unordered_map<double, int> ump;
            for(int j=0; j<points[i].size(); j++){
                if(i == j) continue;

                double slope = getSlope(points[i][0], points[i][1], points[j][0], points[j][1]);
                ump[slope]++;
                result = max(result, ump[slope]);
            }
        }
        return result+1;
    }
private:
    double getSlope(int x1, int y1, int x2, int y2){
        if(x1 == x2) return INT_MAX;
        return (y1 - y2) / (x1 - x2);
    }
};

int main(){
    Solution solution;

    vector<vector<int>> points ={{1,1},{2,2},{3,3}};
    cout << solution.maxPoints(points) << endl;
    return 0;
}