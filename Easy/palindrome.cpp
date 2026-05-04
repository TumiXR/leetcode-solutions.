class Solution {
public:
    bool isPalindrome(int x) {
        //negative number cannot be palindromes
        if (x < 0 ) 
            return false;

        //give x/121 a variabale name original
        //give 0 a variable name reversed 
        int original = x;
        int reversed = 0;

        //keep looping untill x is > 0 and 0/ reversed <= 2^31 -1
        //reversed will now be 0 * 10 + 121 remainder 10

        //as the loop goes on x goes from 121,12,1 and stops at 0
        //because we said x/10 so on so on...

        while (x > 0 && reversed <= INT_MAX - 1 ) {
            reversed = reversed * 10 + x % 10;
            x = x / 10;
        }
        //if original == reversed / 121 = 121 return true
        return original == reversed;
    }
};

// x<0 reads from right to left whille x>0 reads from left to right untill constraint