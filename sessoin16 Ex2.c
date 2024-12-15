#include <stdio.h>

int main(){
	void doigiatri();
	int x = 5;
	int y = 10;
	// in ra gia tri ban dau 
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	
	doigiatri(&x, &y);
	printf("Sau khi doi gia tri\n x = %d\n y = %d ", x, y);
	
	return 0;
}

void doigiatri(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
