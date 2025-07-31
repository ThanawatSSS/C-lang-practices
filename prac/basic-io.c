#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buffer[10];
    FILE *file;

    file = fopen("io-words.txt", "rb");

    if (file == NULL)
    {
        perror("Error opening file \"io-words.txt\"");
        return EXIT_FAILURE;
    }

    if (fread(buffer, sizeof(char), 10, file) == 0)
    {
        fclose(file);
        fputs("An error occurred while reading the file.\n", stderr);
        return EXIT_FAILURE;
    }

    fclose(file);

    printf("%s", buffer);
    return EXIT_SUCCESS;
}
