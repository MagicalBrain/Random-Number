#include <iostream>
#include <time.h>

using namespace std;

const int len = 80;

//���Ժ���
//����һ����n�����n�������
void test(int x,int *p)
{
	*p = x;
}

// ���Ժ���
//����һ����n�����n�������
void test01()
{
	cout << "����������ĸ���" << endl;
	int n;
	cin >> n;
	
	cout << endl << "���ɵ��������" << endl;
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