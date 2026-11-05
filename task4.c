#include <stdio.h> 

int main(){
  double cost;
  double requests;
  

  printf("Введите количество запросов: ");
  while(scanf("%lf", &requests) == 1 && requests != 0){
    if(requests > 0 && requests <= 2000){
      cost = requests * 0.02; 
    }else if(requests > 2000 && requests <= 12000){
      cost = (2000 * 0.02) + (requests - 2000) * 0.015; 
    }else{ 
      cost = (2000 * 0.02) + (10000 * 0.015) + (requests - 12000) * 0.01; 
    }
    printf("Итоговая стоимость запросов: %lf\n", cost); 
  }
  return 0; 
}
