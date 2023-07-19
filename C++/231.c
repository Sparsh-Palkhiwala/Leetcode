// 231. Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        while(n>1)
        {
            if(n%2 == 0)
                n = n/2;
            else
                return false;
        }
        return true;
    }
};
/*
Approach
The code is for the isPowerOfTwo function, which determines whether a given number n is a power of two.

First, the code checks if n is less than or equal to 0. If it is, I immediately return false because 0 and negative numbers cannot be powers of two.

If n is greater than 0, I enter a while loop that continues until n becomes 1. Inside the loop, I perform the following steps:

Check if n is divisible by 2 (i.e., even) by checking if n % 2 is equal to 0. If it is, I divide n by 2.
If n is not divisible by 2 (i.e., odd), I return false because a power of two can only have factors of 2.
I repeat these steps until n becomes 1.
After exiting the loop, I return true because, at this point, n is equal to 1, indicating that it is a power of two.

Complexity analysis:
Time complexity: The code has a time complexity of O(log n), where n is the given number. This is because in the worst case, the loop iterates log n times until n becomes 1, with each iteration reducing n by half.
Space complexity: The space complexity is O(1) because the code uses a constant amount of additional space regardless of the input size.
In summary, the code efficiently determines whether a given number is a power of two by repeatedly dividing it by 2 until it becomes 1. By analyzing the remainder at each step, we can quickly determine if the number has any factors other than 2, indicating whether it is a power of two or not.
*/