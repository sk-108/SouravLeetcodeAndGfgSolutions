class Solution {
public:
    int    maxOperations(vector<int>& nums, int k) {
            sort(nums.begin(),nums.end());
            int p = 0;
        int q = nums.size()-1;
        int count = 0;
        while(p<q)
        {
            int sum = nums[p] + nums[q];
            if(sum ==  k)
            {
                count++;
                p++;q--;
            }
            if(sum > k)
            {
                q--;
            }
            if(sum<k)
            {
                p++;
            }
        }
        return count;
    }
};