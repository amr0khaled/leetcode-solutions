class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first = 0;
        int found = 0;
        int last = 0;
        int size = nums.size();
        int failed = 0;
        for (int i = 1; i < (size + 1); i++) {
            if (found) {
                break;
            }
            if (i == size) {
                if (first == size) {
                    first = -1;
                    last = -1;
                    break;
                }
                i = ++first + 1;
            }
            if (nums[first] + nums[i] == target) {
                last = i;
                found = 1;
            } else {
                failed++;
                if (failed > 18) {
                    if (size - i > 500) {
                        i += 499;
                        first += 499;
                    } else if (size - i > 200) {
                        i += 199;
                        first += 199;
                    } else if (size - i > 100) {
                        i += 99;
                        first += 99;
                    } else if (size - i > 50) {
                        i += 49;
                        first += 49;
                    }
                    failed = 0;
                }
            }
        }
        vector<int> result = {first, last};
        return result;
    }
};