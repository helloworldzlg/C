#include <stdio.h>

#pragma pack(1)
typedef struct
{
    char a;
    char b;
    int c;
    char d;
}TEST_1;
#pragma pack()

typedef struct
{
    char a;
    char b;
    int c;
    char d;
}TEST_2;

int main()
{
    int size;

    size = sizeof(TEST_1);
    printf("size of TEST_1 = %d\n", size);

    size = sizeof(TEST_2);
    printf("size of TEST_2 = %d\n", size);
    return 0;
}