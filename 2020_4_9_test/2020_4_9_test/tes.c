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
	printf("%d and %d 的最大公约数是:%d: \n", x, y, MyCom(x, y));
	
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
//	printf("--------------游戏开始--------------\n");
//	srand ((unsigned int)time(NULL));//以时间为单位中随机数种子
//	int data = rand() % 100 + 1;//生成[1,100]之间的随机数
//	printf("规则：猜猜计算机生成的随机数是多少[1,100]\n ");
//	for (;;){
//		printf("GUESS: ");
//		int x = 0;
//		scanf("%d", &x);
//		if (x > data){
//			printf("你猜大了\n");
//		}
//		else if (x < data){
//			printf("你猜小了\n");
//		}
//		else{
//			printf("恭喜你，猜对了！数字是：%d\n", data);
//			break;
//		}
//	}
//	printf("--------------游戏结束--------------");
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
//			printf("要不要再搞一把？\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("你的输入有误，请重新输入\n");
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
//		printf("请输入你的账号# ");
//		scanf("%s", name);
//		printf("请输入你的密码# ");
//		scanf("%s", passwd);
//
//		if (strcmp(name, DEFAULT_NAME) == 0 && strcmp(passwd, DEFAULT_PSD) == 0){
//			printf("欢迎【%s】进入!\n ", name);
//			break;
//		}
//		else{
//			count--;
//			printf("登陆失败，请检查你的用户名/密码！你还剩【%d】次机会\n", count);
//		}
//	}
//	if (count == 0){
//		printf("登陆失败！请60s后再试\n");
//		int _time = 1;
//		while (_time <= 60){
//			printf("离上次登陆，已经过了 %ds\r", _time);
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
//	//有序数组二分查找
//	//int a[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
//	//int num = sizeof(a) / sizeof(a[0]);
//	//int n = 0;
//	//printf("please input the number of reseach: ");
//	//scanf("%d", &n);
//	//int index = BinSearch(a,num,n);
//	//printf("result:%d\n", index);
//
//
//	//打印字符串中的数字，利用ascii码值做判定条件
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