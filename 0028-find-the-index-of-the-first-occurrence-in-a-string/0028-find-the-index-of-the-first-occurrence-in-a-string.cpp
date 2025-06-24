class Solution {
public:
    int strStr(string haystack, string needle) {

        if (needle.size() > haystack.size()) return -1;
        
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            string sub = haystack.substr(i, needle.size());
            if (needle == sub)
                return i;
        }

        return -1;
    }
};