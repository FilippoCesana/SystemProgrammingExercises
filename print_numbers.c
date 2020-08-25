#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Read a string and print the numbers contained in the string
// in the standard output, one file per line
int print_numbers(const char *string) {

  int in = 0;

  for (; *string != '\0'; ++string) {
    if (isdigit(*string) && in == 0) {
      printf("%c", *string);
      in = 1;
    } else if (isdigit(*string) && in == 1) {
      printf("%c", *string);
    } else if (!isdigit(*string) && in == 1) {
      if (in == 1) {
        printf("\n");
        in = 0;
      }
    } else if (!isdigit(*string) && in == 0) {
      ;
    }
  }
  if (in == 1) {
    printf("\n");
  };
  return 1;
}
int main() {
  const char *string = "This 12 program 494030 can 202020 print  2341324 "
                       "numbers 2314 in 2134the "
                       "2111 standard 9 output 101000. 1002039.";
  print_numbers(string);
  return 1;
}