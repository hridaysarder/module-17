#include<stdio.h>

void world()
{

    printf("World start\n");
    printf("World end\n");
}
void hello()
{
    printf("Hello start\n");
    printf("Hello end\n");
    world();
}
int main()
{
    printf("Main start\n");
    hello();
    printf("Main End\n");
    return 0;
}