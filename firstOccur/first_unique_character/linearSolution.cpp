#include <string>
#include <iostream>

class Solution {
	public:
		int firstUniqChar(std::string s) {
			int	n[26] = {0};
			
			for (std::size_t i = 0; i < s.size(); i++) {
				n[s.at(i) - 'a']++;
			}

			for (std::size_t i = 0; i < s.size(); i++) {
				if (n[s.at(i) - 'a'] == 1)
					return i;
			}
			return -1;
		}
};

int main() {
	Solution	s;

	std::cout << s.firstUniqChar("leetcode") << std::endl;
}
