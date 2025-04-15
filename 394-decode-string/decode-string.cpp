class Solution {
public:
    string helper(int num, string& ans) {
        string fin;
        for (int i = 0; i < num; i++) {
            fin += ans;
        }
        return fin;
    }

    string decodeString(string s) {
        stack<int> numstack;
        stack<char> stringstack;

        for (int i = 0; i < s.size(); i++) {
            string ans;
            if (isdigit(s[i])) {
                int num = 0;
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                numstack.push(num);
                i--;
            }
            else if (s[i] == ']') {
                string temp;
                while (!stringstack.empty() && stringstack.top() != '[') {
                    temp = stringstack.top() + temp;
                    stringstack.pop();
                }

                if (!stringstack.empty()) {
                    stringstack.pop();
                }

                string repeated = helper(numstack.top(), temp);
                numstack.pop();

                for (char ch : repeated) {
                    stringstack.push(ch);
                }
            }

            else {
                stringstack.push(s[i]);
            }
        }

        string res;
        while (!stringstack.empty()) {
            res = stringstack.top() + res;
            stringstack.pop();
        }
        return res;
    }
};