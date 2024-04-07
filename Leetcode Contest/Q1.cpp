//Longest Strictly increasing or Strictly decreasing subarray
#include<vector>
#include<algorithm>
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1;
        int dec = 1;
        int maxLength = 1;
        int n = nums.size();
        if (n==1) return 1;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[i - 1]){
                inc++;
                dec = 1;
            }
            else if(nums[i] < nums[i - 1]){
                dec++;
                inc = 1;
            }
            else{
                inc = 1;
                dec = 1;
            }
            maxLength = max(maxLength, max(inc,dec));
        }
        return maxLength;
    }
};