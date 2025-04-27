class Solution {
public:
    int compress(vector<char>& chars) {
        int read =0;
        int write =0;
        while(read<chars.size()){
            char curr = chars[read];
            int cnt =0;
            while(read<chars.size() && chars[read]==curr){
                read++;
                cnt++;
            }
            chars[write] = curr;
            write++;
            if(cnt>1){
                string strcnt = to_string(cnt);
                for(char c: strcnt){
                    chars[write++]=c;
                }
            }

        }
        return write;
    }
};