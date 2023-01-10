class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.size() <= 1) return nums.size();
        int i =0;
        for(int k =0 ;  k < nums.size(); k++)
        {
            if(nums[i]!=nums[k]) { i++ ; nums[i]=nums[k];}
        }
          return i+ 1;  
    }
};