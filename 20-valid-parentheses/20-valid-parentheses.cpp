class Solution {
public:
    bool isValid(string s) {
        stack<char> things;
        char current;
        
        for (int i = 0; i < s.size(); i++) {
            current = s[i];
            if (current == '(' || current == '{' || current == '[') {
                things.push(current);
            }
            if (current == ')' || current == '}' || current == ']') {
                if (things.empty()) {
                    return false;
                }
                else if (current == ')') {
                    if (things.top() == '(') {
                        things.pop();
                    }
                    else {
                        return false;
                    }
                }
                else if (current == '}') {
                    if (things.top() == '{') {
                     things.pop();
                    }
                    else {
                        return false;
                    }
                }
                else if (current == ']') {
                    if (things.top() == '[') {
                        things.pop();
                    }
                    else {
                        return false;
                    }
                }
            }
        } // while
        if (things.empty()) {
            return true;
        }
        else {
            return false;
        }
    }
};