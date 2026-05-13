class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        //it hashes the number ands checks slots super fast
       unordered_set<int> seen;

       //checks all numbers in the array, if i seen them before return true
       for (int x: nums){
            if (seen.count(x)) 
            return 1;
            //if its seen before return 1 if not 0
            seen.insert(x);
       }
       return 0;
    }
};
