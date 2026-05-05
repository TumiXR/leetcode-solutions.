class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // OuterLoop-the loop keys going untill all 4 elements are checked
        //inner-loop insure

        for ( int i = 0; i < nums.size(); i++) {
            for ( int k = i + 1; k < nums.size(); k++ ) {

                    //if 7 + 2 == 9
                if (nums[i] + nums[k] == target) {
                    //return the index which make it possible eg index 0 + index 1
                    return {i , k};
                }
            }
        }
        //function has to return a vector<int> therefore 0 would be wrong
    return {};    
    }
};