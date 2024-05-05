#include <stdio.h>

void fun(int x)
{
    if (x == 10)
        return;
    printf("%d\n", x);
    fun(1 + x);
}

int main()
{
    fun(1);
    return 0;
}