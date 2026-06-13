#include <stdio.h>

int main(void) {

  char *src = "#include <stdio.h>\n"
              "\n"
              "int main(void){\n"
              "\n"
              "    char* src = %c%s%c;\n"
              "\n"
              "    printf(\"%s\\n\", src);\n"
              "\n"
              "    return 0;\n"
              "}";

  printf(src, '"', src, '"');

  return 0;
}
