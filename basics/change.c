#include <stdio.h>
 int main()
 {
 	int price=0;
 	printf("请输入金额：");
 	scanf("%d",&price);
 	int charge=100-price;
 	printf("找您零钱：%d",charge);
 	return 0;
 }
