#include <stdio.h>

int main() {
   int a[10] = {101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
   int i, largest, second;

   if(a[0] > a[1]) {//101>11
      largest = a[0];//largest=101
      second  = a[1];//second=11
   } else {
      largest = a[1];
      second  = a[0];
   }

   for(i = 2; i < 10; i++) {
      if( largest < a[i] ) {//101<3       101<4     101<50  101<69  101<7 101<8 101<9 101<0
         second = largest;//101
         largest = a[i];
      } else if( second < a[i] ) {//11<3    11<4    11<50   50<69 69<7  69<8 69<9   69<0
         second =  a[i];//11    50    69
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);//101   69

   return 0;
}
