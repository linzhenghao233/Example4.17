/* skiptwo.c -- 跳过输入中的前两个整数 */
#include <stdio.h>
int main(void) {
	int n;

	printf("Please enter three integers:\n");
	scanf_s("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	return 0;
}

//输出结果：
//Please enter three integers :
//2013 2014 2015
//The last integer was 2015