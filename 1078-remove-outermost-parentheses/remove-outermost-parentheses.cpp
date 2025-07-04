class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int start =0;
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(s[i]);
            else st.pop();

            if(st.empty()){
            res  = res + s.substr(start+1,i-start-1);
            start = i+1;
            }
        }
        return res;
    }
};