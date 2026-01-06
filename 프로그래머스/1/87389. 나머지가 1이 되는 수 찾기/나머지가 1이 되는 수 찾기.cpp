#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n % 2 == 1)
    {
        return 2;
    }
    
    int target = n -1;
    for(int i = 3; i * i <= target; i++)
    {
        if(target % i == 0)
        {
            return i;
        }
    }
    
    return target;
}