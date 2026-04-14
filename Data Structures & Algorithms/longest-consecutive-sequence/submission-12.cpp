class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        vector<int> sortednums;
        sortednums = nums;
        sort(sortednums.begin(), sortednums.end());
        int n = nums.size();
        int current = 1;
        int finalNum = 1;
        int snum = sortednums[0];
        for(int i =1; i<n; i++){
            if(sortednums[i] == snum+1){
                snum = sortednums[i];
                current++;
            }
            if(current > finalNum){
                finalNum = current;
            }
            if(snum == sortednums[i]){
            }else{
                current = 1;
                snum = sortednums[i];
            }
        }
        return finalNum;


    }
};
