#include <stdio.h> 

int main(){
  while(1){
  int select; 
  double number; 

  printf("1.Конвертор из бит в байты\n2.Конвертор из байт в килобайт\n3.Конвертор из килобайт в мегабайт\n4.Конвертор из мегабайт в гигабайт\n5.Введите 0 для выхода из программы\n");
  printf("Выберете пункт: ");
  scanf("%d",  &select);

  if(select == 0){
    return 0; 
  }else if (select < 0 || select > 4){
    printf("\n\nНеверный пункт меню, попробуйте снова !\n\n"); 
    continue; 
  }

  switch(select){
    case 1:
      printf("Введите число: ");
      scanf("%lf", &number);
      printf("%.0lf бит = %.1lf байт\n", number, number / 8);
      break; 
     case 2:
      printf("Введите число: ");
      scanf("%lf", &number); 
      printf("%.0lf байт = %.1lf килобайт\n", number, number / 1024);
      break; 
     case 3:
      printf("Введите число: ");
      scanf("%lf", &number);
      printf("%.0lf килобайт = %.1lf мегабайт\n", number, number / 1024);
      break; 
     case 4:
      printf("Введите число: ");
      scanf("%lf", &number);
      printf("%.0lf мегабайт = %.1lf гигабайт\n", number, number / 1024);
      break; 
  }

  }

  return 0; 
}
//Вариант 13
