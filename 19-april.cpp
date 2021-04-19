#Given an array of integers nums and an integer k, return the total number of continuous subarrays whose sum equals to k.



class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count=0;
        int sum;
        for(int i=0;i<nums.size();i++)
        {
            sum=nums[i];
            if(sum==k)
                count++;
            for(int j=i+1;j<nums.size();j++)
            {
                sum=sum+nums[j];
                if(sum==k)
                    count++;
                
            }
        }
        
            

        return count;
    }
};
