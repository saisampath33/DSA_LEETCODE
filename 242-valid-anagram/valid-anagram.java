class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character,Integer> mpp1 = new HashMap<>();
        Map<Character,Integer> mpp2 = new HashMap<>();
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            mpp1.put(c,mpp1.getOrDefault(c,0)+1);
        }
        for(int i=0;i<t.length();i++){
            char c = t.charAt(i);
            mpp2.put(c,mpp2.getOrDefault(c,0)+1);
        }
        return mpp1.equals(mpp2);
    }
}