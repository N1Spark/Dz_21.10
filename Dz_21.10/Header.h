#pragma once
#include <iostream>
using namespace std;

template<class T>
class MySharedPtr
{
	T* ptr;
	static int count;
public:
	MySharedPtr()
	{
		T* ptr = nullptr;
		count++;
	}
	MySharedPtr(T* a)
	{
		ptr = a;
		count++;
	}
	~MySharedPtr()
	{
		if (count > 0)
		{
			delete ptr;
			count = 0;
		}
		else
		{
			count--;
		}
	}
	T* get()
	{
		return ptr;
	}
	T GetCount()
	{
		return *ptr;
	}
};

template<class T>
int MySharedPtr<T>::count = 0;
