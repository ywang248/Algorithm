#include <stdio.h>

/*
    一个数组中有两种数出现了奇数次，其他数出现了偶数次，求出这两个奇数次的数。
    arr = [2, 3, 2, 2, 3, 5, 5, 6, 2, 9, 9, 9]
    假设两种数为a, b
    eor = a ^ b
    假设a, b最右边的1为1 0 0 0 0， 数组可以分为两类，第5位上有1和第五位上没有1，分类之后分别做eor即可求出a，b。
*/
int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 2, 2, 3, 5, 5, 6, 2, 9, 9, 9};
    int arrLength = 12;
    int eor = 0;
    for (int i = 0; i < arrLength; i++) {
        eor = eor ^ arr[i];
    }

    int rightOne = eor & ((~eor) + 1);
    int numWithOne = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] & rightOne != 0) {
            numWithOne ^= arr[i];
        }
    }
    printf("a = %d, b = %d\n", numWithOne, eor ^ numWithOne);
    // printf("The number that appears odd times is: %d\n", eor);
    return 0;
}

    