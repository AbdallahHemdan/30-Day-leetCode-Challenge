class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0, e = 1;
        while(e != nums.size()){
            if(!nums[s] && nums[e]) {
                swap(nums[s], nums[e]);
                s++,e++;
            }else if((nums[s] && nums[e]) || (nums[s] && !nums[e])) {
                s++, e++;
            }else{
                e++;
            }
        }
    }
};
