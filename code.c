#include <stdio.h>
int main(){
	int a=100;
	int b=0;
	for(;a>0;a--){
		if(a%10 == 0){
			b++;
			printf("\nthis my %d group!\n",b);
		}
		if(a%5 == 0){
			printf("this number is %d\t",a-1);
		}
	}
	printf("\n");
}
