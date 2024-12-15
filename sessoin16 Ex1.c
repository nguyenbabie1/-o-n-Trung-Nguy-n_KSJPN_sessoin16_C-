#include <stdio.h>

int main(){
	int sigma[] = {10, 20, 30, 40, 50, 60};
	int *p = sigma; //gan p thanh phan tuu dau tien trong mang
	
	//truy cap phan tu dau tien trong mang bang chi so
	int x = sigma[3];
	printf("x = %d.\n", x);
	int y = *(p + 3);
	printf("y = %d.\n", y);
	
	return 0;
}
