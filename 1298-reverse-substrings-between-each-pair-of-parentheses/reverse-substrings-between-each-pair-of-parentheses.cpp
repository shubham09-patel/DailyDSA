class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;

        string current = "";

        for(char ch : s) {

            if(ch == '(') {

                // Current string save karo

                st.push(current);

                // New bracket ke andar fresh string

                current = "";

            }

            else if(ch == ')') {

                // Current substring reverse karo

                reverse(current.begin(), current.end());

                // Previous string nikalo

                current = st.top() + current;

                st.pop();

            }

            else {

                // Normal character

                current += ch;

            }

        }

        return current;
    }
};