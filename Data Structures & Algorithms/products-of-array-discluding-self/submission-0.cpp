class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> left(nums.size());
        vector<int> right(nums.size());
        vector<int> ans(nums.size());
        int product=1;
        for(int i=0;i<nums.size();i++){
            left[i]=product;
            product*=nums[i];
                }
        product = 1;

for (int i=nums.size()-1;i>=0;i--) {
    right[i] = product;
    product *= nums[i];
}
for(int i=0;i<nums.size();i++){
    ans[i]=left[i]*right[i];
}
return ans;
}};
