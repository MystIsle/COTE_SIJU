#include <string>
#include <vector>

using namespace std;

int GetDigit(long long number)
{
    int digit = 0;
    while(number > 0)
    {
        number /= 10;
        digit += 1;
    }
    return digit;
}

void GetMaxNumber(long long number, int& outMax, long long& outPlace)
{
    outMax = 0;
    outPlace = 0;
    long long place = 1;
    
    while(number)
    {
        int remain = number % (10);
        number -= remain;
        number /= 10;
        
        if(outMax <= remain)
        {
            outMax = remain;
            outPlace = place;
        }
        
        place *= 10;
    }
}

long long solution(long long n) {
    long long answer = 0;
    
    int maxDigit = GetDigit(n);
    
    while(maxDigit)
    {
        int max;
        long long place;
        GetMaxNumber(n, max, place);
        
        n -= max * place;
        answer += max;
        
        maxDigit -= 1;
        if(maxDigit)
        {
            answer *= 10;    
        }
    }
    
    return answer;
}