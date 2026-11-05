#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  
  setlocale(LC_ALL, "");

  wchar_t current; 
  wchar_t prev; 
  
  int count = 0; 

  while ((current = getchar()) != L'#'){
    if(current == prev){
      count++; 
    }
    prev = current; 
  }

  wprintf(L"Одинаковых соседних пар: %d\n", count);
  return 0; 
}
