class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        for(int i : nums){
            freq[i]++;
        }

        vector<int> mostFreqk;
        for(int i = 0; i < k; i++){
            auto most = max_element(freq.begin(), freq.end(), 
                [](const auto& a, const auto& b) {
                    return a.second < b.second;
                });
            mostFreqk.push_back(most->first);
            freq.erase(most);
        }
        return mostFreqk;
    }
};