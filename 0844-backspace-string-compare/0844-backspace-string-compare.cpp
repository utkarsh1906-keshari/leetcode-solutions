class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> S;
        stack<char> T;

        // Process string s
        for (char c : s) {
            if (c == '#') {
                if (!S.empty()){
                     S.pop();
                }
            } else {
                S.push(c);
            }
        }

        // Process string t
        for (char c : t) {
            if (c == '#') {
                if (!T.empty()){
                   T.pop();
                } 
            } else {
                T.push(c);
            }
        }

        // Compare both stacks
        while (!S.empty() && !T.empty()) {
            if (S.top() == T.top()) {
                S.pop();
                T.pop();
            } else {
                return false;
            }
        }

        // If both stacks are empty, strings are equal
        return S.empty() && T.empty();
    }
};
