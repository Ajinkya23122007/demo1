class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]>=nums[e]){//if we do nums[mid]>nums[0] it will not give proper answer for array which is of size 4 for roated 4 time indirectly sorted array..
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return nums[s];
            
    }
};