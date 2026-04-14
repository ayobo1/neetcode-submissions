class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> numsMap;
        int n = nums.size();
        
        for(int num : nums) {
            numsMap[num]++;
            if(numsMap[num] > n / 2) {
                return num;
            }
        }
        
        return -1;
    }
};