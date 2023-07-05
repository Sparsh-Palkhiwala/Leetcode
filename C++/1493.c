//1493 - Longest Subarray of 1's After Deleting One Element
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count = 0;
        int flag = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int f=0,b=0;
            if(nums[i] == 0)
            {
                flag = 1;
                for(int j = i+1 ; j<nums.size() ; j++)
                {
                    if(nums[j] == 1)
                    {
                        f++;
                    }
                    else
                    {
                        break;
                    }
                }
                for(int j = i-1 ; j>=0 ; j--)
                {
                    if(nums[j] == 1)
                    {
                        b++;
                    }
                    else
                    {
                        break;
                    }
                }               
                count = max(count,f+b);
            }
        }
        if(flag == 0)
        {
            return nums.size()-1;
        }
        else
            return count;
    }
};

/*
Intuition
The provided code is a C++ implementation of a function called longestSubarray, which takes a vector of integers nums as input. The function aims to find the longest subarray of 1s with at most one 0 in it.
Basically we are looking for the most number of ones in front and back of a zero we find.

Approach
It initializes two variables count and flag to 0. The count variable will store the length of the longest subarray, and the flag variable will be used to track whether there is at least one zero in the input array.

It enters a loop that iterates over each element of the nums vector.

Inside the loop, it checks if the current element is 0. If it is 0, it means we have found a candidate subarray with one zero in it.

The variable flag is set to 1, indicating that at least one zero is present in the array.

The code then searches for the length of the subarray of 1s to the right of the current zero. It does this by counting the consecutive 1s (denoted by variable f) starting from the element immediately to the right of the current 0.

Similarly, the code searches for the length of the subarray of 1s to the left of the current zero. It does this by counting the consecutive 1s (denoted by variable b) starting from the element immediately to the left of the current 0.

It calculates the total length of the subarray by adding f and b and stores it in the count variable. This is done to find the longest subarray with one 0 in it that includes the current 0.

After processing all elements in the nums vector, the code checks if there was at least one zero in the array (indicated by the flag variable). If no zeros are present, it means all elements are 1s, and the function returns the length of the input array minus one.

If there was at least one zero in the array, the function returns the value of the count variable, which represents the length of the longest subarray with at most one 0.

Complexity
Time Complexity : The time complexity of this code is O(N^2), where N is the size of the input vector nums. This is because, in the worst case, for each 0 encountered in the array, the code may need to search for consecutive 1s to the left and right of that 0. This search involves nested loops, leading to a quadratic time complexity.

Space Complexity : The space complexity of this code is O(1), as it uses a constant amount of additional space to store variables regardless of the size of the input vector.
*/