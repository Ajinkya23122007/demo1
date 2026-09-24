class Solution {
public:
    bool isValid(string s) {
        stack<char> sh;
        
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            
            // If opening bracket, push to stack
            if(ch == '(' || ch == '{' || ch == '['){
                sh.push(ch);
            }
            // If closing bracket, check stack top and pop
            else {
                if(!sh.empty()){
                    char top = sh.top();
                    if((ch == ')' && top == '(') || 
                       (ch == '}' && top == '{') || 
                       (ch == ']' && top == '[')){
                        sh.pop();
                    } else {
                        return false; // Mismatched brackets
                    }
                } else {
                    return false; // Closing bracket with no opening pair
                }
            }
        }
        
        // If stack is empty, all pairs matched perfectly
        return sh.empty();
    }
};