class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int search;
        int f;
        for(int i=0;i<nums.size();++i){
            if(nums[i] == target){
                return i;
            }else{
                search = -1;
            }
        }
        if(search == -1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>target){
                    f = i;
                    break;
                }else{
                    f = nums.size();
                }
            }
        }
        return f;
    }
};