class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<string> st;
        int ob = 0,cb = 0;
        string ns,res;
        for (int i = s.size()-1; i >= 0; i-- )
        {
            if(s[i] == ')')
            {
                cb++;
            }
            else
            {
                ob++;
            }
            if(cb == ob)
            {
                ns = s.substr(i+1,(cb+ob-2));
                cb = 0;
                ob = 0;
                st.push(ns);
            }
        }
        while(!st.empty())
        {
            ns = st.top();
            st.pop();
            res += ns;
        }
        return res;
    }
};