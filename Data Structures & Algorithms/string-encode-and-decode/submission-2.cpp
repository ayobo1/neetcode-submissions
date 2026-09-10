class Solution {
public:

    string encode(vector<string>& strs) {
        string answer;
        for(string s : strs){
            answer += to_string(s.length()) + 'x';
            answer += s;
        }
        return answer;
    }

    vector<string> decode(string s) {
        vector<string> answer;
        while(!s.empty()){
            string x;
            while(s[0] != 'x'){
                x += s[0];
                s.erase(0,1);
            }
            s.erase(0,1);
            int y = stoi(x);
            answer.push_back(s.substr(0,y));
            s.erase(0,y);
        }
        return answer;
    }
};
