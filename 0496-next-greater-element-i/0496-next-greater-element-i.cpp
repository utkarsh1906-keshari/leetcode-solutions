class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int num : nums1) {
            int idx = -1;
            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] == num) {
                    idx = i;
                    break;
                }
            }
            
            int next = -1;
            for (int j = idx + 1; j < nums2.size(); j++) {
                if (nums2[j] > num) {
                    next = nums2[j];
                    break;
                }
            }
            ans.push_back(next);
        }
        return ans;
    }
};
