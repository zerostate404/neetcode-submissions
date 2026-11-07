class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> freq;
        for (auto x : s) freq[x]++;
        for (auto a : t) {
            if (freq[a] == 0) return false;
            freq[a]--;
        } 
        return true;
    }
};
