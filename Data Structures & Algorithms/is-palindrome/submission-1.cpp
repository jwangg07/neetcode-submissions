using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        s = parseString(s);
        int n = s.length();
        for (int i = 0; i < n/2; i++) {
            if (s[i] != s[n-i-1]) {
                return false;
            }
        }
        return true;
    }

public:
    string parseString(string s) {
        int n = s.length();
        for (int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
            if (!isalnum(s[i])) {
                s.erase(i, 1);
                i--;
                n--;
            }
        }
        return s;
    }
};
