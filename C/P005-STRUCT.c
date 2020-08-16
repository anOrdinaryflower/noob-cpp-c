#include<stdio.h>
#include<malloc.h>
typedef struct stu{
char *name;  
 int num;  
}zervar;
int main(){
struct	stu *love=(struct stu*)malloc(sizeof(struct stu));
love->name="ass";
printf(love->name);
return 0;
}
