#include <stdio.h>

void printEscaped(char *s) {
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

void printSelf(char *s) {
  for (int i = 0; s[i]; i++) {
    if (s[i] == 33)
      printEscaped(s);
    else
      putchar(s[i]);
  }
}

int main(void) {

  char *src = "\n#include <stdio.h>\n\nvoid printEscaped(char *s) {\n  for (int i = 0; s[i]; i++) {\n    switch (s[i]) {\n    case '\n':\n      putchar('\\');\n      putchar('n');\n      continue;\n    case '\"':\n      putchar('\\');\n      putchar('\"');\n      continue;\n    case '\\':\n      putchar('\\');\n      putchar('\\');\n      continue;\n    default:\n      putchar(s[i]);\n    };\n  }\n}\n\nvoid printSelf(char *s) {\n  for (int i = 0; s[i]; i++) {\n    if (s[i] == 33)\n      printEscaped(s);\n    else\n      putchar(s[i]);\n  }\n}\n\nint main(void) {\n\n  char *src = \"!\" ;\n  printSelf(src);\n  return 0;\n}\n";
  printSelf(src);
  return 0;
}
