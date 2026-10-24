/* 
Жигунов Кирилл Андреевич
П.И. 1-1
Адреса и указатели
*/
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void order_pair(int *a, int *b) {
    int temp = *a;
    if (*a > *b) {
    *a = *b;
    *b = temp;
    }
    
}

int main(void) {
	int x = -2, y = 0;
	int *p = &x;
	printf("Before: %d %d\n", x, y);
	printf("Value through p: %d\n", *p);
	order_pair(&x, &y);
	printf("After: %d %d\n", x, y);
	printf("Value through p: %d\n", *p);
	return 0;

}

