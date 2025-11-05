#include <stdio.h>
int main(){
  int z;
  int n;
  printf("Enter the atomic number:");
  scanf("%d", & z);
  printf("Enter the number of neutrons:");
  scanf("%d", & n);
  printf("The atomic mass is %d\n", z+n);
}