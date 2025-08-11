/*  ch2_03.c   */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func1()
{
}

void compute()
{
   double Run_Time;
   long S,E;
   S = clock();
   func1();
   E = clock();
   Run_Time = ((double)(E-S)) / CLOCKS_PER_SEC;
   printf("Run_Time = %f seconds\n", Run_Time);
}

void main()
{
   compute();
}

