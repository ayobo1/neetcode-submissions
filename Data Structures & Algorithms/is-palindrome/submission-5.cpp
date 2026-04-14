class Solution {
public:
    bool isPalindrome(string s) {
        string sx = "";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                sx.push_back(tolower(s[i]));
            }
        }

        int end = sx.size()-1;

        for(int start = 0; start < sx.size(); start++){
            if(sx[start] != sx[end]){
                return false;
            }
            end--;
        }

        return true;
    }

};
