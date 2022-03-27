#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Hello Compile Flags!\n");

  #ifdef EX2
  printf("Hello Compile Flag EX2!\n");
  #endif

  #ifdef EX3
  printf("Hello Compile Flag EX3!\n");
  #endif

  return 0;
}
