class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> finalnums;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] != val)
            finalnums.push_back(nums[i]);
        }
        nums = finalnums;
        return finalnums.size();
    }
};