#include "printresult.h"
void printArray(int s[], int n, char* str){
	printf("%s", str);
	int i;
	for(i=0;i<n;i++){
		printf("%5d", s[i]);
	}
	printf("\n");
}
