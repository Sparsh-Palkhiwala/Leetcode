// 859 - Buddy Strings
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size() || s.length() <= 1)
            return false;
        if(s == goal)
        {
            if(s.size() == 2)       //Checking if size == 2 , then can swap or not
            {
                if(s[0] == s[1])
                    return true;
                else
                    return false;
            }
            int count = 0,j = 0;
            while(j < s.size())     // finding distinct character and if duplicates we can swap
            {
                int flag = 0 ;
                for(int i = 0 ; i < s.size() ; i++)
                {
                    if(s[j] == s[i])
                    {
                        flag++;
                    }
                }
                if(flag <= 1)
                    count++;
                j++;
            }
            return count < s.size();
        }
        vector<int> index;
        for (int i=0;i<s.length();i++) {
            if (s[i] != goal[i]) {
                index.push_back(i);
            }
        }

        if (index.size() != 2) {
            return false;
        }
        swap(s[index[0]], s[index[1]]);
        return s == goal;   

    }
};

/*
Approach
The code is for the buddyStrings function, which checks if two strings, s and goal, can be transformed into each other by swapping exactly two characters.

First, the code performs some initial checks:

If the lengths of the strings s and goal are not equal or s has a length less than or equal to 1, then it returns false.
If s and goal are the same, it checks for special cases:
If the length of s is 2 and both characters are the same, it returns true since a swap is possible.
Otherwise, it returns false.
If s and goal are not the same, the code proceeds to find the indices of differing characters in both strings. It uses the index vector to store these indices.

Next, it checks if the number of differing indices is not equal to 2. If not, it means that the strings cannot be transformed by swapping exactly two characters, so it returns false.

If there are exactly two differing indices, the code swaps the characters at those indices in string s using the swap function. Finally, it compares the modified string s with goal and returns true if they are the same, indicating that the strings can be transformed by swapping exactly two characters.

Complexity analysis:
Time complexity: The initial length check takes constant time. The loop that counts the occurrences of each character in s runs in O(n^2) time, where n is the length of the string. The loop that finds differing indices takes O(n) time. Swapping the characters and comparing the strings both take O(n) time. Therefore, the overall time complexity is O(n^2).
Space complexity: The space complexity is O(n) since the index vector can store at most two differing indices.
Overall, the code checks the necessary conditions and performs the required character swaps efficiently, allowing us to determine if two strings can be transformed by swapping exactly two characters
*/