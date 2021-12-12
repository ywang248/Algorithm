#include <stdio.h>

/*
    异或操作本质上就是“无进位的加法”：
    -----
      111
    + 110
    -----
    = 001
    -----
    支持交换律和结合律，(0 ^ N = N), (N ^ N = 0)
*/
int main(int argc, char const *argv[])
{
    int a = 37;
    int b = 64;
    printf("Before exclusive or: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After exclusive or: a = %d, b = %d\n", a, b);

    return 0;
}
