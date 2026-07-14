class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums3[m+n];
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3[k]=nums1[i];
                k++;
                i++;
            }
            else{
                nums3[k]=nums2[j];
                k++;
                j++;

            }
        }
        while(i<n){
            nums3[k]=nums1[i];
            i++;
            k++
        }
        while(j<m){
            nums3[k]=nums2[j];
            k++;
            j++;
        }
        return nums3[k]; 
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]!=0){
                    swap(nums[j],nums[i]);
                    i++;
                }
            } 
    }
};