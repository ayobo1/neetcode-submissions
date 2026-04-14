class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int product = 1;
        int zeroCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeroCount++;
            }else{
            product = product*nums[i];
            }
        }
        if(zeroCount >= 2){
            vector<int> output(nums.size(), 0);
            return output;
        }
        else if(zeroCount == 1){
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                output.push_back(product);
            }else{
                output.push_back(0);
            }
            }
        }
        else{
           for(int i=0; i<nums.size(); i++){
                output.push_back(product/nums[i]);
            }
        } 
        
        return output;
        }

    
};
