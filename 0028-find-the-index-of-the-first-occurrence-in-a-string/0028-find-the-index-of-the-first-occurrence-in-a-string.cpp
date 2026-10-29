class Solution {
public:
    int strStr(string haystack, string needle) {

        int occ = haystack.find(needle);
        if(occ!=-1){
            return occ;
        }
        else{
            return -1;
        }
        
    }
};