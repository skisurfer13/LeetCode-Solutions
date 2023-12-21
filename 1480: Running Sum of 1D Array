class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n = nums.size();

        vector <int> total(n);

        total[0] = nums[0];

        for (int i = 1; i < n; i++){
            total[i] = total[i-1] + nums[i];
        }

        return total;

    }
};
