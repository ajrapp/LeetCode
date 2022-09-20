class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns = s.length();
        int nt = t.length();
        
        if (ns != nt) {
            return false;
        }
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for (int i = 0; i < ns; i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }
        return true;
    }
};