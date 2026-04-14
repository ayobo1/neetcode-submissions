class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> number_map;
        for(int i = 0; i<nums.size(); i++){
            number_map.insert({nums[i], i});}


        int x;
        for(int i = 0; i < nums.size(); i++){
            x = target - nums[i];
            auto y = number_map.find(x);
            if(y != number_map.end() && y->second != i){
                if(i > y->second){
                    return {y->second , i};
                }
                return {i, y->second};
            }
        }


    return {0, 0};
    }
};
