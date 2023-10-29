#include <stdio.h>
#include <stdlib.h>


void enter(int a, int b){

  if(a == 123 && b == 456){
    printf("%d\n", 9000);
  }
  else if(a == 456 && b == 789){
    printf("%d\n", 5000);
  }
  else if(a == 789 && b == 888){
    printf("%d\n", 6000);
  }
  else if(a == 336 && b == 558){
    printf("%d\n", 10000);
  }
  else if(a == 775 && b == 666){
    printf("%d\n", 12000);
  }
  else if(a == 566 && b == 221){
    printf("%d\n", 7000);
  }
  else{
    printf("error\n");
  }
}

int main(){

  int n;
  scanf("%d", &n);

  int accounts[2*n];

  for(int i=0; i<2*n; i++){
    scanf("%d", &accounts[i]);
  }

  for(int i=0; i<2*n; i+=2){
    enter(accounts[i], accounts[i+1]);
  }

  return 0;
}

