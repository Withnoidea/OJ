/*
 * @lc app=leetcode.cn id=2278 lang=cpp
 *
 * [2278] 字母在字符串中的百分比
 */

// @lc code=start
class Solution
{
public:
    int percentageLetter(string s, char letter)
    {
        int res = 0, cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == letter)
            {
                cnt++;
            }
        }
        res = cnt * 1.0 / s.size() * 100;
        return res;
    }
};
// @lc code=end
