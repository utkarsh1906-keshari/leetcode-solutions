class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int leftSum = 0;
            int rightSum = 0;

            for(int h = i - 1; h >= 0; h--) {
                leftSum += nums[h];
            }

            
            for(int j = i + 1; j < nums.size(); j++) {
                rightSum += nums[j];
            }

            if(leftSum == rightSum) {
                return i;
            }
        }
        return -1; 
    }
};
