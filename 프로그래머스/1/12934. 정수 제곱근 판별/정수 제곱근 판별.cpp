#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    
//     double sq = sqrt(n);
//     long long sqr = (long long)sq;
    
//     if(sqr * sqr == n)
//     {
//         return (sqr + 1) * (sqr + 1) ;
//     }
    
//     return -1;
    
    long long left = 1;
    long long right = 50000000000000;
    
    while(left <= right)
    {
        long long mid = (left + right) / 2;
        
        unsigned long long square = (unsigned long long) mid * mid;
        if(square == n)
        {
            return (mid + 1) * (mid + 1);
        }
        else if(square < n)
        {
            left = mid + 1;
        }
        else
        {
            right = mid -1;
        }
    }
    
    return -1;
}