class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> vec{};
        for(int i=0;i<nums.size();i++){
            vector<int> vec{};
        for(int i=0;i<nums.size();i++){
            int p = nums[i];
            int s = nums[p];
            vec.push_back(s);
        }
        return vec;
        }
    }
};