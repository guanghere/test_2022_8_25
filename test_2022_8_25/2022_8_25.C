#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", arr);	
//	printf("%p\n\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n\n", &arr[0]+1);
//
//	
//	//	结果一样
//	//	在绝大多数情况下数组名其实就是首元素的地址
//	//	有两个例外:
//	//	1:	sizeof(数组名)——数组名不是数组首元素的地址,数组名表示整个数组,计算的是整个数组的大小
//			
//	//printf("%d\n", sizeof(arr));
//
//	//	2:	&(数组名)——取出的不是首元素的地址,而是整个数组的地址
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	//year
//	printf("year=%d\n", num / 10000);
//
//	//month
//	printf("month=%02d\n", (num/100) % 100);
//
//	//date
//	printf("date=%02d\n", num % 100);
//
//	return 0;
//}

#include<stdio.h>

//10.00 20.00 30.00 40.00 50.00
int main()
{
	//正整数,科数
	int x = 0;
	scanf("%d", &x);

	//多少门科数的输入
	double a = 0.0, b = 0.0, c = 0.0, d = 0.0, e = 0.0;
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	double arr[5] = { a,b,c,d,e };

	int i = 0;
	for (i = 0; i <= x; i++) {

		double max = 0;
		if (arr[i] > arr[i + 1]) {
			double tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
		}

	}


	//printf("%.2f %.2f %.2f %.2f %.2f ", a, b, c, d, e);



	return 0;
}