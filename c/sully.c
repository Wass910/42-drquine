#include <stdio.h>

#define STRING "#include <stdio.h>%c%c#define STRING %c%s%c%c#define FILENAME %cSully_X.c%c%c%cint main() {%c    char filename[9] = FILENAME;%c    int i = %d;%c    FILE *file;%c%c    while (i > 0)%c    {%c        i--;%c        filename[6] = i + '0';%c        file = fopen(filename, %cw%c);%c        fprintf(file, STRING, 10, 10, 34, STRING, 34, 10, 34, 34, 10, 10,10, 10, i,  10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10);%c    }%c    return 0;%c}"
#define FILENAME "Sully_X.c"

int main() {
    char filename[9] = FILENAME;
    int i = 5;
    FILE *file;

    while (i > 0)
    {
        i--;
        filename[6] = i + '0';
        file = fopen(filename, "w");
        fprintf(file, STRING, 10, 10, 34, STRING, 34, 10, 34, 34, 10, 10,10, 10, i,  10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10);
    }
    return 0;
}