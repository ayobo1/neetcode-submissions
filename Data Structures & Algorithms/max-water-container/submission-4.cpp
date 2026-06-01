class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int max = (right-left) * min(heights[left], heights[right]);
        while(left != right){
            if(heights[left] > heights[right]){
                right--;
                int curr = (right-left) * min(heights[left], heights[right]);
                if(curr > max) max = curr;
            }else if(heights[left] < heights[right]){
                left++;
                int curr = (right-left) * min(heights[left], heights[right]);
                if(curr > max) max = curr;
            }else{
                left++;
                int curr = (right-left) * min(heights[left], heights[right]);
                if(curr > max) max = curr;
            }
        }
        return max;
    }
};
