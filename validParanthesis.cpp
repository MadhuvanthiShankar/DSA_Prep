// class Solution {
// public:
//     bool isValid(string s) {
//         int openCount = 0;
//         for(char c : s){
//             if(c == '(' || c == '{' || c == '[')
//                 openCount++;
//             else
//                 openCount--;
//         }
//         if(openCount == 0) return true;
//         else return false;
//         return openCount;
//     }
// };

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // Stack to store opening brackets
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                // Push opening brackets onto the stack
                st.push(c);
            } else {
                if (st.empty()) return false; // No corresponding opening bracket found
                
                // Check if the current closing bracket matches the top opening bracket on the stack
                if ((c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '['))
                    return false; // Mismatched closing bracket
                
                // Pop the matching opening bracket from the stack
                st.pop();
            }
        }
        
        // If the stack is empty, all opening brackets have been matched
        return st.empty();
    }
};
