#include<stdio.h>
#include<string.h>
union zerdata{
	char *a;
	int h;
	long double s;
};
int main(){
	union zerdata DATA;
	/*union [共用体名] [变量名]*/
	printf("%d",sizeof(zerdata));
}
