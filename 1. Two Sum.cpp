class Solution {
public
    vectorint twoSum(vectorint& nums, int target) {
        mapint, int m;
        vectorint v;
        int b=nums.size();
        for(int i=0;ib;i++){
            int f=target-nums[i];
            
            if(m.find(f) !=m.end()){
                v.push_back(m[f]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
        
     return v;   
        
    }
};
