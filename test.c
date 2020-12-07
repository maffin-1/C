#include <ctype.h>
#include <stdio.h>

int main () {
  for (short c=30; c<128; c++) {
    printf("%4d %2c islower: %d isupper: %d\n", c, c, islower(c)>0, isupper(c)>0);
  }
}