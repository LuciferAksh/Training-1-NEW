class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long count = 0, continous = 0;
        for (int num : nums) {
            if (num == 0) {
                continous++;
                count += continous;
            } else {
                continous = 0;
            }
        }
        return count;
    }
};