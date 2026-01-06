#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int result = 0;
	int multiply = 1;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		char c = s[i];
		if (c == '+')
		{
			continue;
		}

		if (c == '-')
		{
			result *= -1;
            continue;
		}

		result += (c - '0') * multiply;
		multiply *= 10;
	}
    
    return result;
}