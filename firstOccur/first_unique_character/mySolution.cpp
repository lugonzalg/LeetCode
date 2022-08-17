#include <string>
#include <iostream>

class Solution {
	public:
		int firstUniqChar(std::string s) {
			const char    *index;
			int     i;
			int		j;
			
			index = s.c_str();
			i = 0;
			while (index[i]) {
				j = 0;
                while (index[j]) {
					if (i != j and index[i] == index[j])
						break ;
					j++;
				}
				if (index[i] != index[j])
					return i;
				i++;
			}
			return -1;
		}
};
