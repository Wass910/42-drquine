#include <stdio.h>

#define FILENAME   "Grace_kid.c"
#define STRING     "#include <stdio.h>%c%c#define FILENAME   %cGrace_kid.c%c%c#define STRING     %c%s%c%c#define LAUNCHER() int main() {FILE *file = fopen(FILENAME, %cw%c); if (file); fprintf(file, STRING, 10,  10, 34, 34, 10, 34, STRING, 34, 10, 34, 34, 10, 10, 10, 10, 10);return 0;}%c/*%cThis program will print its own source when run.%c*/%c%cLAUNCHER()"
#define LAUNCHER() int main() {FILE *file = fopen(FILENAME, "w"); if (file); fprintf(file, STRING, 10,  10, 34, 34, 10, 34, STRING, 34, 10, 34, 34, 10, 10, 10, 10, 10);return 0;}
/*
This program will print its own source when run.
*/

LAUNCHER()