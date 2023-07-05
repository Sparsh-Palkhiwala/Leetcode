//1025 - Divisor Game
class Solution {
public:
    bool divisorGame(int n) {
        if(n%2 == 0)
            return true;
        return false;
    }
};
/*Alice will always win if she starts with an even number as she can leave Bob with n = 1 after all possible division.

First, I check if the input integer n is divisible by 2 using the modulo operator %. If n is evenly divisible by 2, it means Alice can make a move by subtracting an integer (such as 1) from n to get a new value.

In this game, Alice always starts with an even number, and by subtracting 1, she can make the new value odd. Since it is Bob's turn after Alice, he will receive an odd number.

Now, I return true from the function, indicating that Alice can always win the game when given an even number as input.

If the input n is not divisible by 2, it means Alice will receive an odd number on her turn. In this case, there is no way for Alice to subtract an integer and keep the value even. So, I return false, indicating that Alice cannot win the game when given an odd number as input.

In summary, the code checks if the input number n is divisible by 2. If it is, Alice can win the game by following a specific strategy. If it's not divisible by 2, Alice cannot win. The code uses this property to determine the outcome of the game.

The time complexity of this code is O(1) because the computation does not depend on the magnitude of n. The space complexity is also O(1) as it uses a constant amount of additional space to store variables.*/