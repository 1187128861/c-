#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
//1-100��9�ĸ���
int MyNum()
{
	int i = 1;
	int index = 0;
	for (; i <= 100; i++){
		if (i % 10 == 9){
			index++;
		}
	}
	i = 1;
	for (; i <= 100; i++){
		int num = i / 10;
		if (num == 9){
			index++;
		}
	}
	return index;
}

int main()
{
	printf("1-100��9�ĸ�����");
	printf("%d\n", MyNum());
	system("pause");
	return 0;
}


//�������1/1-1/2+1/3��������-1/100
//float MySum(){
//	int i = 1;
//	float result = 0;
//	for (i; i <= 100; i++){
//		if (i % 2 != 0){
//			result += 1 / (float)i;
//		}
//		else if (i % 2 == 0){
//			result -= 1 / (float)i;
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	printf("result: %f\n",MySum());
//	system("pause");
//	return  0;
//}



//ʮ���������
//int MyMax(int arr[]){
//	int max = 0;
//	int i = 1;
//	max = arr[0];
//	for (i; i < 10; i++){
//		max = arr[i]>max ? arr[i] : max;
//	}
//	return max;
//}
//
//int main()
//{
//	int arr[10] = { 0 }; 
//	int i = 0;
//	printf("�����10������\n");
//	for (; i < 10; i++){
//		printf("������ڡ�%d��������",i+1);
//		scanf("%d", &arr[i]);
//	}
//	printf("10������������: %d\n",MyMax(arr));
//	system("pause");
//	return 0;
//}


//99�˷�
//void MyMul()
//{
//	int i = 1;
//	int j = 1;
//	for (i; i < 10; i++){
//		for (j; j <= i; j++){
//			if (j<=i){
//				printf("%d*%d=%d\t", j, i, i*j);
//			}
//		}
//		j = 1;
//		printf("\n");
//	}
//}
//
//int main()
//{
//	MyMul();
//	system("pause");
//	return 0;
//}

