static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class Solution 
{
public:
    int minSteps(int n) 
    {
        int res = 0;
        for (int i = 2; n > 1; ++i) 
        {
            while (n % i == 0) 
            {
                res += i;
                n /= i;
            }
        }
        return res;
    }
};