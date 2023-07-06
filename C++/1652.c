//1652. Defuse the Bomb
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if(k == 0)
        {
            vector<int> ans(code.size(),0);
            return ans;
        }
        vector<int> ans;
        int sum,count;
        for(int i = 0 ; i<code.size() ; i++)
        {
            sum = 0;
            count = 0 ;
            if(k > 0)
            {
                if(i == code.size()-1)
                {
                    for(int j = 0 ; j<code.size() , count<k ; j++)
                    {
                        sum = sum + code[j];
                        count++;
                    }
                }
                else
                {
                    for(int j = i+1 ; j<code.size() ,count<k ; j++)
                    {
                        sum = sum + code[j];
                        count++;
                        if(j == code.size()-1)
                        {
                            j = -1;
                        }
                    }
                }
                ans.push_back(sum);
            }
            else
            {
                if(i == 0)
                {
                    for(int j = code.size()-1 ; j>0 , count<abs(k) ; j--)
                    {
                        sum = sum + code[j];
                        count++;
                    }
                }
                else
                {
                    for(int j = i-1 ; j>=0 ,count<abs(k) ; j--)
                    {
                        sum = sum + code[j];
                        count++;
                        if(j == 0)
                        {
                            j = code.size();
                        }
                    }
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
}; //Please Upvote

/*
Intuition
Sure! Let me explain the code in first person and discuss its complexity.

In this code, I see a class named Solution with a member function decrypt. This function takes a reference to a vector of integers code and an integer k as input. It aims to decrypt the given code using a specific algorithm.

Approach
Now, let's go through the code step by step:

The code starts with an if condition that checks if k is equal to 0. If this condition is true, it means there is no encryption to decrypt, so the function creates a new vector ans with the same size as code and fills it with 0s. This is done to return a vector of zeros as the decryption result.

If k is not equal to 0, the code proceeds to the main decryption logic. It initializes an empty vector ans to store the decryption results.

The code then enters a for loop that iterates over the elements of the code vector. Inside this loop:

It initializes sum and count variables to 0, which will be used to calculate the sum of elements and keep track of the number of elements considered.
It checks if k is greater than 0. If k is positive, it means we need to decrypt the code in the forward direction.
If the current index i is the last index of code, a nested for loop is used to iterate from the first element to the kth element of code. It calculates the sum of these elements and increments the count variable.
If the current index i is not the last index, another nested for loop is used to iterate from the next index to k elements ahead, wrapping around to the beginning if necessary. Again, it calculates the sum of these elements and increments the count variable.
If k is less than or equal to 0, it means we need to decrypt the code in the backward direction. The logic is similar to the forward direction, but it iterates in reverse order and wraps around from the last index to the beginning if necessary.
Finally, the calculated sum is added to the ans vector.
After the loop finishes, the function returns the ans vector containing the decrypted code.

Complexity
Time complexity : The code uses two nested loops, each iterating over the elements of the code vector. Therefore, the time complexity is O(n^2), where n is the size of the vector.
Space complexity : The space complexity is O(n) as it uses additional space to store the decrypted code in the ans vector, which has the same size as code.
*/