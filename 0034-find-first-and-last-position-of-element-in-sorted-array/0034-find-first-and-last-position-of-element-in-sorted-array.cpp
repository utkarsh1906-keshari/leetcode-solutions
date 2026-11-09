class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int min = 0;
        int max=nums.size()-1;
        int first = -1, last = -1;

        while(min<=max){
            int mid=min+(max-min)/2;
            if(nums[mid]==target){
                first=mid;
                max = mid - 1;
                
            }
            else if(target<nums[mid]){
                max=mid-1;
            }
            else{
                min=mid+1;
            }
        }

        min = 0;
        max=nums.size()-1;

        while(min<=max){
            int mid=min+(max-min)/2;
            if(nums[mid]==target){
                last=mid;
                min = mid + 1; 
            }
            else if(target<nums[mid]){
                max=mid-1;
            }
            else{
                min=mid+1;
            }
        }

        return{first,last};
        
    }
};