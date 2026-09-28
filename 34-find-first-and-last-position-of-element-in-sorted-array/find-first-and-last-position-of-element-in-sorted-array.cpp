class Solution {
public:
    int lowerBound(vector<int>& nums, int target) {
        int l = 0, h = nums.size();

        while(l < h){
            int mid = l + (h - l) / 2;
            if(nums[mid] < target){
                l = mid + 1;
            } else {
                h = mid;
            }
        }
        return l;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int low = lowerBound(nums, target);
        int high = lowerBound(nums, target + 1) - 1;

        if(low < (int)nums.size() && nums[low] == target){
            return {low, high};
        }
        return {-1, -1};
    }
};