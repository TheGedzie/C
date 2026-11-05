#include <stdio.h>
#include <ctype.h>

int main(){
  
  char ch = 0; 
  int count; 

  while((ch = getchar()) != '#'){
    if(tolower(ch) == 'a' || tolower(ch) == 'e'){
      count++; 
    } 
  }
  printf("a || e были введены: %d раз", count); 
  return 0; 
}
