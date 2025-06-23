class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            bool isMatch = true;

            switch (s[i])
            {
            case '(':
            case '{':
            case '[':
                st.push(s[i]);
                break;

            case ')':
            case '}':
            case ']':
                if (st.empty()) {
                    isMatch = false;
                    break;
                }
                if ((st.top() == '(' && s[i] == ')')
                    || (st.top() == '{' && s[i] == '}')
                    || (st.top() == '[' && s[i] == ']'))
                {
                    st.pop();
                    break;
                }

                isMatch = false;
                break;

            default:
                break;
            }

            if (isMatch) continue;
            else return false;
        }

        return st.empty();
    }
};