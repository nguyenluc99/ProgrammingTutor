#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/*
planned scenario:
1
2
3
=

=> program output 6
*/
int getSum(int arr[], int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++) sum += arr[i];
    return sum;
}

int prevMain()
{
    int n;
    scanf("%d", &n);

    while(1)
    {
        int *dummyArr = (int*)malloc(n * sizeof(int));
        char* str = (char*) malloc(10);
        // int arr[10000];
        for (int i = 0; i < n; i++)
            dummyArr[i] = i*i;
        for (int i = 0; i < n+2; i++)
            printf("ele at %d is %d, and pointer getting type %d\n", i, dummyArr[i], *(dummyArr + i));
        printf("sum is %d\n", getSum(dummyArr, n));
        // free(dummyArr);
        usleep(10000);
        free(dummyArr);
    }
    return 0;
}

int main()
{
    char *buffer;
    size_t bufsize = 3;
    size_t numOfCharacters;
    int arr[10];

    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }
    int count = 0;
    while(1)
    {
        printf("Type something: ");
        numOfCharacters = getline(&buffer,&bufsize,stdin);
        printf("you type %zu characters\n", numOfCharacters);
        // for (int i = 0; i < numOfCharacters; i++)
        //     printf("index of char at %d is %d\n", i, buffer[i]);
        if (buffer[0] == '=')
        {
            // terminate the loop
            break;
        }
        else
        {
            // convert to number
            int num = atoi(buffer);
            // add to array arr.
            arr[count] = num;
            count ++;
        }
    }
    // verify the inputted elements
    for (int i = 0; i < count; i++)
        printf("num at %d is %d\n", i, arr[i]);
    // do something with the whole array, for example, print the sum:
    printf("Sum of elements in the array is %d\n", getSum(arr, count));
    return 0;
}
