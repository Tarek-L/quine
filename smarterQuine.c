#include <stdio.h>

int main(void){

    char* src = "#include <stdio.h>%c%cint main(void){%c%c    char* src = %c%s%c;%c%c    printf(src, 10,10,10,10,34,src,34,10,10,10,10,10,10);%c%c    return 0;%c}%c";

    printf(src, 10,10,10,10,34,src,34,10,10,10,10,10,10);

    return 0;
}
