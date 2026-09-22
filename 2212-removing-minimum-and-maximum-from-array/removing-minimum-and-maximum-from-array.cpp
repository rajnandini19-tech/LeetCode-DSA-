class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int ind_smallest = -1;
        int ind_largest = -1;
        for (int i = 0 ; i < n ; i++) {
            smallest = min(nums[i] , smallest);
            largest = max(nums[i] , largest);
            
            if (nums[i] == smallest) {
                ind_smallest = i;
            }
            if (nums[i] == largest) {
                ind_largest = i;
            }
        }
            int left = min (ind_smallest , ind_largest);
            int right = max (ind_smallest , ind_largest);

            int opt_1 = right + 1;
            int opt_2 = n - left;
            int opt_3 = (left + 1) + (n - right);

            return min({opt_1 , opt_2 , opt_3});
        }
};