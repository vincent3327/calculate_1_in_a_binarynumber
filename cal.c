/**************************************************************
*此为计算二进制数中有多少个1的算法程序
*21/7/2020
*vincent you
*nanshan Shennan          Overcross ShenZhen
***************************************************************/
#include<stdio.h>
typedef unsigned int uint16;

uint16 calculate1(uint16 num)
{
	uint16 count = 0;
	while(0!=num)
	{
		num &= (num-1);
		count++;
	}
	return count;
}


int main()
{
	uint16 num = 0xbd;
	printf("%d\n",calculate1(num));
}

