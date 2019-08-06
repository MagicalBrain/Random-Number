#include <iostream>
#include <time.h>

using namespace std;

const int len = 80;

//测试函数
//输入一个数n，输出n个随机数
void test(int x,int *p)
{
	*p = x;
}

// 测试函数
//输入一个数n，输出n个随机数
void test01()
{
	cout << "输入随机数的个数" << endl;
	int n;
	cin >> n;
	
	cout << endl << "生成的随机数：" << endl;
	srand((unsigned int)time(0));
	for (int i = 0; i < n; i++)
	{
		int re = rand();
		cout << re % len << " ";
	}
}

int main()
{
	test01();
	

	return 0;
}