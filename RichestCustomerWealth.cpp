class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum{0};
        int max = INT_MIN;
        vector<int> vec{};
        for(size_t i=0;i<accounts.size();i++){
            for(size_t j=0; j<accounts[i].size();j++){
                sum += accounts[i][j];
            }
            vec.push_back(sum);
        }
        for(size_t i=0;i<vec.size();i++){
            if(vec[i]>max)
                max = vec[i];
        }
        return max;
    }
};