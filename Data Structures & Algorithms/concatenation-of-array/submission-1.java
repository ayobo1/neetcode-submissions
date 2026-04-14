//given array nums and its length n

class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;
        int[] ans = new int[2*n];
        for(int i=0; i<n; i++){
            ans[i] = nums[i];
        }//for future, instead of two, instantiate an indentation of i%n. it will be 0 for 0-n and n+x for n-2n.
        for(int i=n; i<2*n; i++){
            ans[i] = nums[i%n];
        }
        return ans;

    }
}