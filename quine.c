#include <stdio.h>

int main(void) {

  char *src = "#include <stdio.h>\n"
              "\n"
              "int main(void){\n"
              "\n"
              "    char* src = %c%s%c;\n"
              "\n"
              "    printf(src, '\"', src, '\"');\n"
              "\n"
              "    return 0;\n"
              "}\n";

  printf(src, '"', src, '"');

  return 0;
}
