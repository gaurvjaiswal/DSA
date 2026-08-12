class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth = 0;

        for(char ch : s) {
            if(ch == '(') {
                depth++;

                if(depth > 1)
                    ans += ch;
            }
            else {
                depth--;

                if(depth > 0)
                    ans += ch;
            }
        }

 
    }
};