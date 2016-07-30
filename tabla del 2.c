#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=0,a=2;
	for(i=0;i<=10;i++){
		printf("%d x %d = %d\n",a,i,a*i);
	}
	printf("\n");
	system("pause");
	return 0;
}
