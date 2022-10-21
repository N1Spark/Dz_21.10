#include<iostream>
#include "Header.h"
using namespace std;

int main()
{
	MySharedPtr<int> pt(new int(10));
	MySharedPtr<int> pt2 = pt;
	cout << pt.get() << ' ' << pt.GetCount() << endl;
	cout << pt2.get() << ' ' << pt2.GetCount() << endl;
}