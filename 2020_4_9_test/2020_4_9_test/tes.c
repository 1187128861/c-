#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#pragma warning(disable:4996)

#define SIZE 128
#define TRY_COUNT 3	
#define DEFAULT_NAME "admin"
#define DEFAULT_PSD "xixi"

int IsSu(int x)
{
	int i = 2;
	int top = (int)sqrt(x);
	for (; i <= top; i++){
		if (x%i == 0){
			return 0;
		}
	}
	//if (i <= top){
	//	return 0;
	//}
	return 1;
}

int MyCom(int _x, int _y){
	int top = _x > _y ? _y : _x;
	for (; top > 0; top--){
		if (_x%top == 0 && _y%top == 0){
			return top;
		}
	}
}

int main()
{
	int x = 0;
	int y = 0;
	printf("please input two number: ");
	scanf("%d %d", &x, &y);
	printf("%d and %d �����Լ����:%d: \n", x, y, MyCom(x, y));
	
	//int i = 100;
	//for (; i <= 200; i++){
	//	if (IsSu(i)){
	//		printf("%d ", i);
	//	}
	//}

	system("pause");
	return 0;
}

//void Menu()
//{
//	printf("############################\n");
//	printf("## 1.Guess          2.Quit##\n");
//	printf("############################\n");
//	printf("Please select -> ");
//}
//
//void Game()
//{
//	printf("--------------��Ϸ��ʼ--------------\n");
//	srand ((unsigned int)time(NULL));//��ʱ��Ϊ��λ�����������
//	int data = rand() % 100 + 1;//����[1,100]֮��������
//	printf("���򣺲²¼�������ɵ�������Ƕ���[1,100]\n ");
//	for (;;){
//		printf("GUESS: ");
//		int x = 0;
//		scanf("%d", &x);
//		if (x > data){
//			printf("��´���\n");
//		}
//		else if (x < data){
//			printf("���С��\n");
//		}
//		else{
//			printf("��ϲ�㣬�¶��ˣ������ǣ�%d\n", data);
//			break;
//		}
//	}
//	printf("--------------��Ϸ����--------------");
//}
//
//int main()
//{
//	int quit = 0;
//	while (!quit){
//		Menu();
//		int select = 0;
//		scanf("%d", &select);
//		switch (select){
//		case 1:
//			Game();
//			printf("Ҫ��Ҫ�ٸ�һ�ѣ�\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("���������������������\n");
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char name[SIZE];
//	char passwd[SIZE];
//	int count = 0;
//START:
//	count = TRY_COUNT;
//	while (count > 0){
//		printf("����������˺�# ");
//		scanf("%s", name);
//		printf("�������������# ");
//		scanf("%s", passwd);
//
//		if (strcmp(name, DEFAULT_NAME) == 0 && strcmp(passwd, DEFAULT_PSD) == 0){
//			printf("��ӭ��%s������!\n ", name);
//			break;
//		}
//		else{
//			count--;
//			printf("��½ʧ�ܣ���������û���/���룡�㻹ʣ��%d���λ���\n", count);
//		}
//	}
//	if (count == 0){
//		printf("��½ʧ�ܣ���60s������\n");
//		int _time = 1;
//		while (_time <= 60){
//			printf("���ϴε�½���Ѿ����� %ds\r", _time);
//			Sleep(1000);
//			_time++;
//		}
//		printf("\n");
//		goto START;
//	}
//
//	system("pause");
//	return 0;
//}




//********1
//#define EOF -1   //ctrl+z

int BinSearch(int a[], int num, int x)
{
	int start = 0;
	int end = num - 1;
	while (start <= end){
		int mid = (start + end) / 2;
		if (x > a[mid]){
		//right
			start = mid + 1;
		}
		else if (x < a[mid]){
			end = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

//
//
//int main()
//{
//
//	char str1[] = "hello world...";
//	char str2[] = "##############";
//	int start = 0;
//	int end = strlen(str1) - 1;
//	/*for (; start <= end; start++, end - 1){
//		str2[start] = str1[start];
//		str2[end] = str1[end];
//		Sleep(1000);
//		printf("%s\r", str2);
//	}*/
//
//	while (start <= end){
//			str2[start] = str1[start];
//			str2[end] = str1[end];
//			start++, end--;
//			Sleep(1000);
//			printf("%s\r", str2);
//		}
//
//
//	//int i = 0;
//	//for (; i <= 10; i++){
//	//	printf("%d\r", i);
//	//	Sleep(500);
//	//}
//	
//
//	//����������ֲ���
//	//int a[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
//	//int num = sizeof(a) / sizeof(a[0]);
//	//int n = 0;
//	//printf("please input the number of reseach: ");
//	//scanf("%d", &n);
//	//int index = BinSearch(a,num,n);
//	//printf("result:%d\n", index);
//
//
//	//��ӡ�ַ����е����֣�����ascii��ֵ���ж�����
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF){
//		if (ch<48 || ch>57){
//			continue;
//		}
//		putchar(ch);
//	}
//*/
//
//	/*int c = 0;
//	while ((c = getchar()) != EOF){
//		putchar(c);
//	}*/
//	system("pause");
//	return 0;
//}