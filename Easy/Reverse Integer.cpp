class Solution {
public:
    int reverse(int x) {

    int reversed = 0;

        //while x is not equal to 0
        //create a temporary placeholder remain which will collect what remainder of x
        // remain will store the first few digits  
        while ( x != 0) {
        int remain = x % 10;
        //wil store the last few digits
            x = x / 10;
         
         //check overflow
    if ( reversed > INT_MAX / 10 || reversed < INT_MIN / 10)
        return 0;

            //reverses it
        reversed = reversed * 10 + remain;

        }
    return reversed;
    }
};