// Author: Jacob Noethiger jln5438@psu.edu
// Collaborator: Samantha Glenn sag5863@psu.edu
// Collaborator: Heonyrong Ha hzh5274@psu.edu
// Collaborator:Kelly Wole
// Section:2
// Breakout:4
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if(n==0){
    return n;
  }
  else{
    return sum_n(n-1)+n;
  }
}
void print_n(int n, const char *s){
  if(n==1){
    printf("%s\n",s);
  }
  else if(n!=0){
    printf("%s\n",s);
    print_n(n-1,s);
  }
}
int main(void){
  int n=atoi(readline("Enter an int: "));
  int i=sum_n(n);
  printf("sum is %d.\n",i);
  const char *s=readline("Enter a string: ");
  print_n(n,s);
}