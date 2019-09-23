// HelloWorld.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*

#include<stdio.h>
#include<algorithm>
using namespace std;
int main() {
	int a[5000000];
	int len;
	int i;
	int j;
	int k;

	scanf("%d", &len);
	scanf("%d", &k);

	for (i = 0; i < len; i++) {

		scanf("%d", &a[i]);
	}
	sort(a, a + len);

	printf("%d\n", a[len - k]);

	return 0;
}
*/
// /*

#include <iostream>
#include <stdio.h>
#include <classtest.h>
using namespace std;
int main()
{
	std::cout << "Hello World!\n";
	classtest testa;
	testa.set_a();
	testa.set_b();
	cout << testa.get_a() << endl;
	cout << testa.get_b() << endl;
}
//*/
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
