class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.length(); ++i) {
            if (s_to_t.find(s[i]) == s_to_t.end() && t_to_s.find(t[i]) == t_to_s.end()) {
                s_to_t[s[i]] = t[i];
                t_to_s[t[i]] = s[i];
            } else {
                if (s_to_t[s[i]] != t[i] || t_to_s[t[i]] != s[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
