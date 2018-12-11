/*初始化数组，打印每个月的天数*/

#include <stdio.h>

#define MONTHS 12

int main(void)
{
	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  //声明一个包含12个元素的int类型的数组，并初始化数组；
	int index;

	for(index = 0; index < MONTHS; index++)								  //通过for循环，利用index作为下标，历遍整个数组并进行打印；
		printf("Month %2d has %2d days.\n", index+1, days[index]);

	return 0;
}
