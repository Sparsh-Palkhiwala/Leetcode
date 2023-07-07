//1646. Get Maximum in Generated Array
class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> v1;
        if(n == 0)
        {
            return 0;
        }
        v1.push_back(0);
        v1.push_back(1);
        for(int i = 2 ; i<=n ;i++)
        {
            if(i % 2 == 0)
            {
                v1.push_back(v1[i/2]);
            }
            else
            {
                v1.push_back(v1[i/2] + v1[(i/2)+1]);
            }
        }
        int max = *max_element(v1.begin(), v1.end());
        return max;
    }
};
/*
Approach
Now, let's go through the code step by step:

The code starts with an if condition that checks if n is equal to 0. If this condition is true, it means there are no numbers to generate, so the function directly returns 0.

If n is not equal to 0, the code proceeds to the main logic. It initializes an empty vector v1 to store the generated sequence of numbers.

The code pushes the first two numbers of the sequence, 0 and 1, into the v1 vector using the push_back function.

It then enters a for loop that starts from index 2 and goes up to n. Inside this loop:

It checks if the current index i is even or odd using the modulo operator.
If i is even, it means that i can be divided by 2 without any remainder. In this case, the code pushes the element at index i/2 from the v1 vector into v1 itself. This generates the next number in the sequence.
If i is odd, it means that i divided by 2 has a remainder. In this case, the code pushes the sum of the elements at indices i/2 and (i/2)+1 from the v1 vector into v1. This generates the next number in the sequence.
After the loop finishes, the code uses the max_element function from the <algorithm> library to find the maximum element in the v1 vector.

Finally, the function returns the maximum element found, which represents the maximum number in the generated sequence.

Complexity
Time complexity : The code runs a single loop from 2 to n, so the time complexity is O(n).
Space complexity : The space complexity is also O(n) because the v1 vector stores the generated sequence, which can have a maximum size of n.
*/