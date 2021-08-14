class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s=0;
        vector<int> vec{};
        while(s<n){
            vec.push_back(s);
            vec.push_back(n+s);
            s++;
        }
        return vec;
    }
};