#include <stdio.h>

// return_type func_name (type1 input1,...)

void increment(int* x)
{
    *x = *x + 1;
}
void div(int divisor, int division, int quot, int* rem){
    quot = divisor / division;
    *rem = divisor % division;
}

int main()
{
    // int a = 10;
    // increment(&a);
    // printf("a is %d\n", a);
    int a = 13, b=5;
    int quot = -1, *rem = -1;
    div(a, b, quot, &rem);
    printf("quot is %d, rem is %d\n", quot, rem);

    // scanf("%d", &a);
    // printf("a is %d, address is %p\n", a, &a);
    // int arr[5] = {1, 2, 3, 4, 5};
    // // char arr[5] = {'c', 'd', 'e', 'f', 'g'};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("array at %d, address is %p\n", i, &arr[i]);

    // }
    // // int*, char*int, 
    // // int* ptr = &a;
    // // double*
    // char ch = 'c';
    // printf("size of int  %d, size of char %d\n", sizeof(a), sizeof(ch));
    // printf("size of int  %d, size of char %d\n", sizeof(&a), sizeof(&ch));
    return 0;
}