#include <stdio.h>
#include <string.h>

int main()
{
    const char sr[] = "123456789 hello";
    char dst[6];
    printf("memcpy = |%s|\n", (char *)memcpy(dst, sr, 5));
    return 0;
}