class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map; 
        int longSub = 0;
        int w = 0; 

        for(int i = 0; i < s.size(); i++) {
            char c = s[i];

            if(map.find(c) != map.end() && map[c] >= w) {
                w = map[c] + 1; 
            }

            map[c] = i;
            longSub  = max(longSub , i - w + 1);
        }

        return longSub;
}
    
};