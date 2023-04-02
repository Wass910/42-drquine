#include <stdio.h>

/*
This program will print its own source when run.
*/

const char *other_function() {
    const char *code = "#include <stdio.h>%c%c/*%cThis program will print its own source when run.%c*/%c%cconst char *other_function() {%c    const char *code = %c%s%c;%c    return code;%c}%c%cint main() {%c    /*%c    main comment%c    */%c    printf(other_function(), 10, 10, 10, 10, 10, 10, 10, 34, other_function(), 34, 10, 10, 10, 10, 10, 10 ,10, 10, 10, 10);%c    return 0;%c}";
    return code;
}

int main() {
    /*
    main comment
    */
    printf(other_function(), 10, 10, 10, 10, 10, 10, 10, 34, other_function(), 34, 10, 10, 10, 10, 10, 10 ,10, 10, 10, 10);
    return 0;
}