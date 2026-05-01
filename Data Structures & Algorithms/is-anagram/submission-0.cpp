class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap;
        for (char c : s) {
            umap[c]++;
        }
        for (char c : t) {
            umap[c]--;
        }
        for (pair<char, int> p : umap) {
            if (p.second != 0) return false;
        }
        return true;
    }
};
