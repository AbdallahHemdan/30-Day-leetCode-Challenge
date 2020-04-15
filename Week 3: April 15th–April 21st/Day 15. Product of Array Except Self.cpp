class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int allProd = 1;
        int z = 0;
        for(auto i : nums){
            if(i) prod *= i;
            else z++;
            allProd *= i;
        }
        vector<int> res(nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]) res[i] = allProd / nums[i];
            else if(z > 1) res[i] =  0;
            else res[i] = prod;
        }
        return res;
    }
};  
