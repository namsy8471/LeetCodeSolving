class Solution {
private:
    string expand(const string& s, int left, int right)
    {
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            left--;
            right++;
        }

        return s.substr(left + 1, right - left - 1);
    }

public:
    string longestPalindrome(string s) {
        if (s.length() < 2) return s;

        string ret = "";

        for (int i = 0; i < s.length(); i++)
        {
            string odd_palindrome = expand(s, i, i);
            if (odd_palindrome.length() > ret.length())
            {
                ret = odd_palindrome;
            }

            string even_palindrome = expand(s, i, i+ 1);
            if (even_palindrome.length() > ret.length())
            {
                ret = even_palindrome;
            }
        }

        return ret;
    }
};