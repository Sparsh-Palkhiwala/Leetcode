//1551 - Minimum Operations to Make Array Equal
class Solution {
public:
    int minOperations(int n) {
        if(n%2 == 0)
        {
            int i = 0;
            for(int j = 1 ; j<n; j = j+2)
            {
                i = i + j;
            }
            return i;
        }
        else
        {
            int j = 0;
            for(int i = 2 ;i<n ;i=i+2)
            {
                j = j+i;
            }
            return j;
        }
    }
}
/*
Approach
Honestly i recommend using a pen and paper for math questions cuz they help you figure out some sort of pattern
Here all we have to do is if n is even we , look for the sum of all odd integers upto n and return the sum.
Similarly if n is odd, we already have the middle value and we have to change the rest , so essentialy comes down to the sum of all even integers upto n.
This code is a solution to a problem that involves finding the minimum number of operations required to make all elements in an array equal. The input parameter n represents the length of the array.

The code starts by checking if n is even or odd using the condition n%2 == 0. If n is even, it enters the first block of code. Otherwise, it enters the second block of code.

In the first block of code, a variable i is initialized to 0. Then, a for loop is used to iterate over the range from 1 to n with a step size of 2. Inside the loop, the value of j is added to i. This means that i will be the sum of all odd numbers from 1 to n-1. Finally, the value of i is returned.

In the second block of code, a variable j is initialized to 0. Then, a for loop is used to iterate over the range from 2 to n with a step size of 2. Inside the loop, the value of i is added to j. This means that j will be the sum of all even numbers from 2 to n-1. Finally, the value of j is returned.

In summary, the code calculates the sum of either all odd numbers or all even numbers from 1 to n-1, depending on whether n is even or odd. The returned value represents the minimum number of operations required to make all elements in an array equal.
*/