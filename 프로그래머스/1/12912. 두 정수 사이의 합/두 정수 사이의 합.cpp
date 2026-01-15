#include <cmath>

using namespace std;

long long solution(int a, int b) {
    long long diff =  abs(a - b);
    long long add = (long long)a + b;
    long long answer = add * (diff + 1) / 2;
    return answer;
}