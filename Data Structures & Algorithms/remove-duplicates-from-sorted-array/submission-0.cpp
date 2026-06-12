class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                int temp=nums[i+1];
                nums[i+1]=nums[j];
                nums[j]=temp;
                i++;
            }
        }
        return i+1;
    }
};