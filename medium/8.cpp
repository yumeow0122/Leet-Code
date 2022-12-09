#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int myAtoi(string str)
    {

        long result = 0;
        int indicator = 1;

        int i = str.find_first_not_of(' ');
        if (i == -1)
            return 0;
        if (str[i] == '-' || str[i] == '+')
            indicator = (str[i++] == '-') ? -1 : 1;
        while ('0' <= str[i] && str[i] <= '9')
        {
            result = result * 10 + (str[i++] - '0');
            if (result * indicator >= INT_MAX)
                return INT_MAX;
            if (result * indicator <= INT_MIN)
                return INT_MIN;
        }
        return result * indicator;
    }
};
int main()
{
    string str = "123";

    Solution solution;

    cout << solution.myAtoi(str) << endl;

    return 0;
}