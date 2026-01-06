#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(long long n) {
    
    vector<int> answer;
    
    while(n)
    {
        int remain = n % 10;
        answer.push_back(remain);
        
        n-=remain;
        n /= 10;
    }
    
    return answer;
}