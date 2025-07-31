#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cwd[_MAX_PATH];
    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
        printf("Current working directory: %s\n", cwd);
    }
    return 0;
}
