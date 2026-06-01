class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int maxVert = numbers.size()-1;
        int minVert = 0;
        int curr = numbers[minVert]+numbers[maxVert];
        while(curr != target){
            if(curr > target){
                maxVert--;
                curr = numbers[minVert]+numbers[maxVert];
            }else if(curr < target){
                minVert++;
                curr = numbers[minVert]+numbers[maxVert];
            }else{
                return {0,0};
            }
        }
        return {(minVert+1), (maxVert+1)};

    }
};
