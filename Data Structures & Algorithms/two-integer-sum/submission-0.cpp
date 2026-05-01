class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> umap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            umap[nums[i]].push_back(i);
        }
        for (int i = 0; i < n; i++) {
            // umap[nums[i]].erase(i);
            erase(umap[nums[i]], i);
            if (!umap[target-nums[i]].empty()) {
                vector<int> v;
                v.push_back(i);
                v.push_back(umap[target-nums[i]][0]);
                return v;
            }
        }
    }
};
