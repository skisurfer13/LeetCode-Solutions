class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        vector<int>nums;

        for (long long int i = 1; i < num; i++){
            if (num % i == 0)
                nums.push_back(i);
        }

        int n = nums.size();

        int total = 0;

        for (int i = 0; i < n; i++)
            total = total + nums[i];

        if (total == num)
            return true;

        else 
            return false;

    }
};
