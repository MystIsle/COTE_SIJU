#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++)
    {
        int num = arr[i];
        if(num % divisor == 0)
        {
            answer.push_back(num);
        }
    }
    
    sort(answer.begin(), answer.end());
    if(answer.empty())
    {
        answer.push_back(-1);
    }
    return answer;
}