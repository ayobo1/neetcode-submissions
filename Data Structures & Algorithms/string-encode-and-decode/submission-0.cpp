class Solution {
public:

    string encode(vector<string>& strs) {
        string final_str = "";
        string words = "";
        for(int i = 0; i<strs.size(); i++){
            final_str += (char)strs[i].length();
            words += strs[i];
        }
        final_str += " " + words;
        return final_str;
    }


    vector<string> decode(string s) {
        vector<string> strs;
        int j = 0;
        vector<int>strSize;
        while(s[j] != ' '){
            strSize.push_back((unsigned char)s[j]);
            j++;
        }
        s = s.substr(j+1);

        string sx;
        for(int i=0; i<strSize.size(); i++){
            sx = s.substr(0, strSize[i]);
            strs.push_back(sx);
            s = s.substr(strSize[i]);
        }
        return strs;
        }
};
