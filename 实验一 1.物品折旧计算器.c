#include <stdio.h>


int main(int argc, char *argv[]) 
{
	float input[4];       //0 购买价格、1 废品价值、2 产品设计寿命、3 使用年限
	scanf("%f,%f,%f,%f",&input[0],&input[1],&input[2],&input[3]);

	float output_1,output_2;

	output_1=(input[0]-input[1])/input[2];	//每年折旧费 =（购买价格-废品价值）/产品设计寿命（年）
	output_2=input[0]-input[3]*output_1; 	//折旧价值 = 购买价格-每年折旧费*使用年限
	
	
	printf("%.2f,%.2f",output_1,output_2);
	return 0;
}

