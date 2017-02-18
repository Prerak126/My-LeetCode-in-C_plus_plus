class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        double x=0;
        //double y=2x;
        
        if (a==0 && b==0){
            return x;
        }
        
        else if(a==0){
            if(b%2==0){
                x=nums2[b/2]+nums2[(b/2)-1];
                return x/2;
            }
            else{
                x=nums2[(b-1)/2];
                return x;
            }
        }
        
        else if(b==0){
            if(a%2==0){
                x=nums1[a/2]+nums1[(a/2)-1];
                return x/2;
            }
            else{
                x=nums1[(a-1)/2];
                return x;
            }
        }
        
        else {
            
            
            for(int i=0;i<b;i++){
                nums1.push_back(nums2[i]);
            
            }
            
            sort(nums1.begin(),nums1.end());
            
            int p=nums1.size();
            
            if(p%2==0){
                x=nums1[p/2]+nums1[(p/2)-1];
                return x/2;
            }
            else{
                x=nums1[(p-1)/2];
                return x;
            }
        }
            
        }
};
