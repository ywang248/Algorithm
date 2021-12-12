#include <stdio.h>

/*
    一个数组中有一种数出现了奇数次，其他数出现了偶数次，求出这个奇数次的数。
    arr = [2, 3, 2, 2, 3, 5, 5, 6, 2]
*/
int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 2, 2, 3, 5, 5, 6, 2};
    int arrLength = 9;
    int eor = 0;
    for (int i = 0; i < arrLength; i++) {
        eor = eor ^ arr[i];
    }
    printf("The number that appears odd times is: %d\n", eor);
    return 0;
}

    