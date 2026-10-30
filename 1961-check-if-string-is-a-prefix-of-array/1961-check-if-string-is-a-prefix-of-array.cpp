class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string st = "";
        for(int i = 0 ; i<words.size() ; i++){
            st+=words[i];
            if(st==s){
                return true;
            }
        }
        return false;
    }
};