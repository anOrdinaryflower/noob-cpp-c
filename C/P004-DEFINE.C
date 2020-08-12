#include<stdio.h>
#define MAX(x,y) ((x>y?x:y))/*µÈÍ¬ÓÚ((x)>(y)?(x):(y))*/
#define A(x) Q##x
#define B(y) #y
int main(){
	printf("%d",MAX(9,12));
  const	char*Q1="\nString";
	printf("%s%s",A(1),B(\n666));
}
