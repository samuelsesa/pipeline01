#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int randomnumber = 0;
    srand(time(NULL));
    randomnumber = rand() % 10;
    printf("randomnumber=%d\n", randomnumber);
    if(randomnumber <= 4) {
      return 0;
    } else {
      return 1;
    }
}

