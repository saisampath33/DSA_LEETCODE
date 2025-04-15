class Solution {
public:
    int maxVowels(string s, int k) {
        int left =0;
        int right =0;
        string str = "";
        int cnt =0;
        int maxi =INT_MIN;
        while(right<s.size()){
            str.push_back(s[right]);
            if(Vowel(s[right])){
                cnt++;
            }
            if((right-left+1) == k){
                maxi = max(cnt,maxi);
                if(Vowel(str[0])) cnt--;
                str.erase(str.begin());
                left++;
            }
            right++;
        }
        return maxi;
    }
    bool Vowel(char c){
        return c == 'a' ||  c =='e' || c =='i' || c=='o' || c=='u';
    }
};