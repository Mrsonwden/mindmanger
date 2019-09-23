#include "classtest.h"

int classtest::get_a()
{
	return a;
}

int classtest::get_b()
{
	return b;
}

int classtest::set_a()
{
	a = 100;
	return 1;
}

int classtest::set_b()
{
	b = 200;
	return 1;
}

#include  <iostream>
using namespace std;
static void test_func()
{
	cout << "this is static func" << endl;
}

