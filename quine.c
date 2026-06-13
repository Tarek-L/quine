#include <stdio.h>

void print_escaped(char *s) {
  for (int i = 0; s[i]; i++) {
    switch (s[i]) {
    case '\n':
      putchar('\\');
      putchar('n');
      continue;
    case '"':
      putchar('\\');
      putchar('"');
      continue;
    case '\\':
      putchar('\\');
      putchar('\\');
      continue;
    default:
      putchar(s[i]);
    };
  }
}

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
  printf(src, '\"', src, '\"');
  print_escaped(src);
  return 0;
}
