#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {

    int workCount = 0;

    long bigNum = num;
    
    if(bigNum == 1)
    {
        return workCount;
    }
    
    while (workCount < 500)
    {
        bool isEven = bigNum % 2 == 0;
        if (isEven)
        {
            bigNum = bigNum / 2;
        }
        else
        {
            bigNum = (bigNum * 3) + 1;
        }
        
        workCount++;
        
        if (bigNum == 1)
        {
            return workCount;
        }
    }
    
    return -1;
}
