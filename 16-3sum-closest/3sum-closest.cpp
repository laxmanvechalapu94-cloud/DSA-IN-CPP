

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        int diff = INT_MAX, ans = INT_MAX;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
  
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int currdiff = std::abs(sum - target);

    
                if (currdiff < diff) {
                    diff = currdiff;
                    ans = sum;
                }

                
                if (sum < target) {
                    j++;
                } else if (sum > target) {
                    k--;
                } else {
                    return sum; 
                }
            }
        }
        return ans;
    }
};