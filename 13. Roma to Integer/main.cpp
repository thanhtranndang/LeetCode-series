class Solution
{
public:
    int romanToInt(string s)
    {
        if (s == "")
            return 0;
        map<char, int> value;
        value['I'] = 1;
        value['V'] = 5;
        value['X'] = 10;
        value['L'] = 50;
        value['C'] = 100;
        value['D'] = 500;
        value['M'] = 1000;

        int ans = 0;
        int length = s.length();

        for (int i = 0; i < length - 1; i++)
        {
            if (value[s[i]] < value[s[i + 1]])
            {
                ans -= value[s[i]];
            }
            else
            {
                ans += value[s[i]];
            }
        }
        ans += value[s[length - 1]];
        return ans;
    }
};