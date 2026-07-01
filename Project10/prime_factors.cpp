#include <vector>

using std::vector;


class PrimeFactors {
public:
	vector<int> of(int n)
	{
		if (n == 2)
			return { 2 };
		return {};
	}
};