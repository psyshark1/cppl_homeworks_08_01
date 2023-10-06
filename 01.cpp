#include <iostream>
#include <vector>
#include <algorithm>

std::ostream& operator << (std::ostream& l, std::vector<int>& r)
{
	for (const auto& it : r)
	{
		l << it << ' ';
	}
	return l;
}

int main()
{
	std::vector<int> vec{ 1, 1, 2, 5, 6, 1, 2, 4 };
	std::sort(vec.begin(), vec.end(), [](const int& lhs, const int& rhs) {return lhs < rhs; });
	auto nend = std::unique(vec.begin(), vec.end());
	vec.erase(nend, vec.end());
	std::cout << vec;
	return 0;
}
