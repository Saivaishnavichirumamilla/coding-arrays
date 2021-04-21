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


This can also be done in the follwing way in O(n) time.
    BY USING HASHING TECHNIQUE.
    
    
    
    class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>map;
        int n=nums.size();
        int sum=0,count=0;
        map[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
                
            
            
            if(map.find(sum-k)!=map.end())
            {
              count+=map[sum-k];  
            }
            map[sum]++;
        }
        return count;
    }
};
