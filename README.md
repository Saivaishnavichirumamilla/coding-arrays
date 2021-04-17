# coding-arrays

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]!=0)
                continue;
            if(nums[i]==0)
            {
                int j=i;
                while(j<(n-1))
                {
                    nums[j]=nums[j+1];
                    j++;
                }
                
                 nums[j]=0;     
                
            }
            
        
        }
                      
         for(int i=0;i<n;i++)
                      {
                          cout<<nums[i]<<" ";
                      }
                      
        
    }
};
