class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> solution(n+1, 0);
        int offset = 1;
        for(int i=1; i<=n; i++){
            if(offset*2 == i){
                offset = i;
            }
            solution[i] = 1 + solution[i - offset];
        }
        return solution;
    }
};
