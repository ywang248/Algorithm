#include <stdio.h>

/*
    int N
     N = 0...0 1 1 0 1 0 1 0 0 0 0
    ~N = 1...1 0 0 1 0 1 0 1 1 1 1
    +1 = 1...1 0 0 1 0 1 1 0 0 0 0
    N & ((~N) + 1) = 1 0 0 0 0
*/
int main(int argc, char const *argv[])
{
    int N = 848;
    int ans = N & ((~N) + 1);
    printf("The right most number of N is: %d\n", ans);
    return 0;
}
