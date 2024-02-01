class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector <int> ans;
        int total = 0;

        if (n == 2)
            return {1, -1};

        for (int i = 0; i < n; i++)
            ans.push_back(i);

        ans.pop_back();

        for (int i =0; i < n-1; i++)
            total = total + ans[i];

        ans.push_back(-total);

        return ans;

    }
};
