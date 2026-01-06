#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    
    double sq = sqrt(n);
    long long sqr = (long long)sq;
    
    if(sqr * sqr == n)
    {
        return (sqr + 1) * (sqr + 1) ;
    }
    
    return -1;
}