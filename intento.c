#include <stdio.h>

int main(){
	int arr[2][3] = {{10,20,30}, {40, 50, 60}};
	int (*ptr)[3] = arr + 1;
	printf("%d %d", *(*(ptr - 1) + 2), *(*ptr + 1));
	return 0;

}