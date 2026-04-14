class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> buckets;

        for (int i=0; i<strs.size(); i++) {
            string key = strs[i];                      
            sort(key.begin(), key.end());       
            buckets[key].push_back(strs[i]);          
        }

        vector<vector<string>> answer;
        answer.reserve(buckets.size());

        for (auto& revstr : buckets) {

            answer.push_back(revstr.second);  // gather groups
        }
        return answer;


    }
};
