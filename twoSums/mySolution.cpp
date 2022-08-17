#include <vector>
#include <iostream>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int>    v;
        
        for (uint16_t i = 0; i < nums.size(); i++) {
            if (v.find(nums[i] - target)) {
                
            }
            v.push_back(nums[i] - target);
            }
        }
        return nums;
    }
};

int main() {
	std::vector<int>	v = {3, 2, 4};
	std::vector<int>	result;
	Solution			s;
	int					n = 6;

	result = s.twoSum(v, n);
	std::cout << result[0] << result[1];

	return 0;
}
