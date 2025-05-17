class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int n = nums1.size(), m = nums2.size(); 
            nums1.insert(nums1.end(), nums2.begin(),nums2.end());
            sort(nums1.begin(),nums1.end()); 
    
            int mid = (n+m)/2;
            double ans = nums1[mid]; 
    
            if(((n+m)&1) == 0){
                ans += nums1[mid-1];
                ans /= 2.0;
            } 
    
            return ans ;
        }
    };