#include <signal.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

int gcd (int x, int y) {
  if (y == 0)
    return x;
  else
    return gcd(y, x % y);
}

main()
{
  printf("%d\n", gcd(16,4));
}

