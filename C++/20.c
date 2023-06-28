//Valid Parenthesis

class Solution {
public:
    bool isValid(string s) {
        stack<char> v1;
        int len = s.length();
        if(len % 2 != 0)
        {
            return false;
        }
        for(int i = 0 ; i < len ; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                v1.push(s[i]);
            }
            else if(!v1.empty())
            {
                char top = v1.top();
                if ((s[i] == ')' && top == '(') || 
                    (s[i] == '}' && top == '{') ||
                    (s[i] == ']' && top == '[')) 
                    { 
                        v1.pop() ;
                    }
                    else 
                    {
                        return false ; 
                    }
            }
            else 
            {
                return false;
            }
        }
        if (v1.empty())
        {
            return true ; 
        }
        return false ;
    }
};

/*
💡
n is the length of the input string `s`. In the worst case, when all opening brackets are encountered, the stack `v1` may store up to n/2 elements.

# Please Upvote
# Code
```
class Solution {
public:
    bool isValid(string s) {

Generated from the latest AC submission
Intuition
The provided code is a C++ implementation of a function called isValid that checks whether a given string s containing parentheses, curly brackets, and square brackets is valid or not. The function returns a boolean value indicating the validity of the string.

Approach
The function initializes an empty stack called v1 to store opening parentheses, curly brackets, and square brackets encountered during traversal.

It calculates the length of the input string s and assigns it to the variable len.

It checks if the length of the string is odd. If it is, the function returns false since a valid combination of opening and closing brackets should have an even length.

It enters a loop that iterates through each character of the string.

If the current character is an opening bracket (i.e., '(', '{', '['), it is pushed onto the stack v1.

If the current character is a closing bracket and the stack is not empty, the function checks if the top element of the stack matches the current closing bracket. If they match (e.g., ')' matches '('), the top element is popped from the stack since it has been closed correctly. Otherwise, the function returns false since the closing bracket does not match the expected opening bracket.

If the current character is a closing bracket and the stack is empty, it means there is no corresponding opening bracket available, so the function returns false.

After traversing all characters of the string, the function checks if the stack is empty. If it is, it means all opening brackets have been closed correctly, and the function returns true. Otherwise, there are unmatched opening brackets remaining in the stack, so the function returns false.

Complexity
Time complexity : The time complexity of this code is O(n), where n is the length of the input string s. This is because the code performs a single traversal of the string and each operation (pushing or popping from the stack) takes constant time.

Space complexity : The space complexity of this code is O(n), where n is the length of the input string s. In the worst case, when all opening brackets are encountered, the stack v1 may store up to n/2 elements.
*/