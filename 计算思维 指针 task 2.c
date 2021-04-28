#include <stdio.h>

/*
@Filename: ex602.c
@Author: 
@Version: 1.0
@Date: 2021-03-18
@Description: Pointer As Function Parameter
*/

int main(void){
	void assign(int *array, int length);
	int max(int *array, int length);
	int a[5];
	assign(a, 5); /* 为数组a元素赋值 */
	printf("max=%d",max(a, 5)); /* 求数组元素最大值并输出 */
	
	return 0;
}

/*
 * 函数名称：assign
 * 函数功能：通过键盘输入为一维数组元素赋值
 * 形式参数：array为int型指针；length为int型，可用于表示一维数组长度
 * 返 回 值：无
 */
void assign(int *array,int length){
	// 请编码实现assign函数
		int i, input;
		for (i = 0; i <= length - 1; i++)
		{ 
			scanf("%d", &input);
			array[i] = input;
		}

}

/*
 * 函数名称：max
 * 函数功能：求解一维数组元素最大值
 * 形式参数：array为int型指针；length为int型，可用于表示一维数组长度
 * 返 回 值：int型，为数组元素最大值
 */
int max(int *array,int length){
	// 请编码实现max函数
		int i, max = array[0];
		for (i = 0; i <= length - 1; i++)
		{
			if (max < array[i])
			{
				max = array[i];
			}
		}
		return max;

}

