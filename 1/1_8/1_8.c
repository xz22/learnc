/*变量交换（1）*/

#include <stdio.h>

int main(void){
	int a, b, t;

	scanf("%d%d", &a, &b);

	t = a;
	a = b;
	b = t;

	printf("%d %d\n", a, b);

	return 0;
}