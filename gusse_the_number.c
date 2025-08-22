#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 srand(time(0));
 int gusse;
 printf("Guess the number.");
 scanf("Gusses the num%d!",&gusse);
 int num = (rand()%10)+1;
 if (gusse != num) {
  printf("You lose. The number is %d", num);
 } else {
  printf("You win. The number is %d", num);
 }
}
