#include <stdio.h>
#include <stdbool.h>
#include <abcd.h>



void func(char* arg)
{
  char buf1[10];
  char buf2[20];

  strncpy(buf1, arg, sizeof(buf2));
}


int  main() {

    int val = 1;
    unsigned int val1 = -1;
    if (val != val1) {
    printf("hello");
   }

return  0;

}
