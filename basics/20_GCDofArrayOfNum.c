#include <stdio.h>
#include <stdlib.h>

unsigned gcd(unsigned x, unsigned y)
{
    unsigned wk;
    if (x < y)
    {
        wk = x;
        x = y;
        y = wk;
    }
    while (y)
    {
        wk = x % y;
        x = y;
        y = wk;
    }
    return x;
}

int gcd_a(int n, int a[n])
{
    printf("Finding GCD \n");
    if (n == 1)
        return a[0];
    if (n == 2)
        return gcd(a[0], a[1]);
    int h = n / 2;
    return gcd(gcd_a(h, &a[0]), gcd_a(n - h, &a[h]));
}

int main()
{
    int i, NoOfElements;
    int *arr; //array pointer

    //How many elements you want to store in array?
    printf("How many elements? Enter the size: ");
    //Store size into variable n
    scanf("%d", &NoOfElements);

    //allocate memory dynamically with of
    //total size = NoOfElements* size of 1 integer i.e. sizeof(int)

    //malloc returns void pointer,means points to nothing
    //typecast it to int* as we want to store int values
    arr = (int *)malloc(NoOfElements * sizeof(int));

    //Check memory is allocated successfully
    //if fails return from the program.
    if (arr == NULL)
    {
        printf("ERROR: MEMORY ALLOCATION FAIL\n");
        return 1; //memory allocation fails - return from here
    }

    //
    printf("Enter %d elements: ", NoOfElements);

    //fill the array with elements by
    //reading from console screen
    for (i = 0; i < NoOfElements; ++i)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Inputted \n");

    int size_A = sizeof(arr) / sizeof(*arr);
    int gcd = gcd_a(size_A, arr);
    
    printf("GCD is %d\n", gcd);
    //display the array
    printf("for the Array :\n");
    for (i = 0; i < NoOfElements; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
