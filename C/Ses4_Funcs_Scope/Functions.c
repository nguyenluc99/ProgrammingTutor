#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= num/2; i++)
        if (num % i == 0)
            return false;
    return true;
}
int add(int a, int b, int c) {return a+b + c;}

void printDate(bool toPrint)
{
    printf("xxx");
    if (!toPrint)
        return;
    printf("date is ...");
}
int main()
{
    int input = 2;
    if (isPrimeNumber(input))
        printf("%d is a prime num\n", input);
    else
        printf("%d is NOT a prime num\n", input);
    return 0;
}


/*

return_Type functionName(type1 var1, type2 var2,)
{
    /// 
    if

    int 
    switch
    ..
    for 

    return 
}


void fcName(..)
{
    ....
}
int bitAt(int ith, int number)

bitAt(2, 13) = 0, 13 = 1101
bitAt(3, 13) = 1, 13 = 1101



power(3, 4) = 81
power(2, 5) = 32.

*/