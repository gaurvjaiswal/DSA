class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            // Skip duplicate first elements
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while(left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if(sum < 0) {
                    left++;
                }
                else if(sum > 0) {
                    right--;
                }
                else {

                    ans.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    // Skip duplicate left values
                    while(left < right && nums[left] == nums[left - 1])
                        left++;

                    // Skip duplicate right values
                    while(left < right && nums[right] == nums[right + 1])
                        right--;
                }
            }
        }

        return ans;
    }
};