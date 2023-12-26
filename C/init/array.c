#include <stdio.h>

int main()
{
    int* ptr;
    

    int array[3];
    int age[40];
    array[0] = 10;
    // for (int idx = 0; idx  < 6; idx ++)
        // printf("value at %d is %d, and its ASCII character is '%c'\n", idx, array[idx], array[idx]);
    // printf("value at %d is %d, and its ASCII character is '%c'\n", 1, array1, array1);
    // printf("value at %d is %d, and its ASCII character is '%c'\n", 2, array2, array2);
    // printf("value at %d is %d, and its ASCII character is '%c'\n", 3, array3, array3);
    // ptr = &array1;
    // printf("array1 is %d, value at ptr is %d\n", array1, *ptr);
    // array1 = 100;
    // printf("array1 is %d, value at ptr is %d\n", array1, *ptr);
    char someStr[100] = "HelloFromC";
    printf("String is '%s'\n", someStr);
    someStr[10] = 'A';
    someStr[11] = 'B';
    // someStr[12] = '\0'; // auto
    // someStr[5] = '\0';`````
    printf("String is '%s'\n", someStr);
    for (int idx = 0; idx < 100; idx++)
        printf("%c - ", someStr[idx]);
    return 0;

}
// H e l l o F r o m C 0
// H e l l o F r o m C A B .....
// H e l l o 0 r o m C A B .....
