class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size() - 1;
        int occ = 0;

        for(int i = 0; i <= j; i++) {
            if(nums[i] == val) {

                while(j >= i && nums[j] == val) {
                    j--;
                }

                if(i < j) {
                    swap(nums[i], nums[j]);
                    j--;
                }

                i--; 
            }
            else {
                occ++;
            }
        }

        return occ;
    }
};