#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // int x = 100;
    // char str[1000];
    // itoa(x, str, 10);
    // printf("str is %s\n", str);
    char strNb[10] = "1000, 100, 21321"; // split // delimiter ", " // python string.split('\n') => array[] => for
    char el = "21321";
    // char strList[3][10] = ["1000", "100",..];
    // strNb ++;
    int nb = atoi(strNb);
    nb++;
    printf("nb is %d\n", nb);
    return 0;
}

int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n-r));
}

int sum(int n) {
    return (n > 0 ? (n*(n+1))/2 : -1);
}

