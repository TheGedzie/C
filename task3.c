#include <stdio.h>

int main(){
  
  int number;
  int count = 0;

  while(scanf("%d", &number) == 1 && number != 0){
    if(number % 3 == 0 || number % 5 == 0){
      count++; 
    } 
  }
  printf("Количество чисел, подошедших под условия: %d", count); 
  return 0; 
}
