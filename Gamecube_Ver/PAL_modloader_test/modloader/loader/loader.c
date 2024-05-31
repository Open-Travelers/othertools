#include <libtwoc.h>

void temporary(void)
{
    printf("hello world\n");
}
void _start(void)
{
    temporary();
    return;
}
