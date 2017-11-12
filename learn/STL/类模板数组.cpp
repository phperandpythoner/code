/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

template<class T>
class MyArray {
public:
	MyArray(int capacity)
	{
		this->mCapacity = capacity;
		this->mSize = 0;

		//�����ڴ�ռ�
		this->mAddr = new T[this->mCapacity];
	}

	//��������
	MyArray(const MyArray<T>& arr)
	{
		int i = 0;
		this->mCapacity = arr.mCapacity;
		this->mSize = arr.mSize;

		//����������ڴ�ռ�
		this->mAddr = new T[this->mCapacity];
		for (i = 0; i < this->mSize; i++)
		{
			this->mAddr[i] = arr.mAddr[i];
		}
	}

	T& operator[](int index)
	{
		return this->mAddr[index];
	}

	MyArray<T> operator=(const MyArray<T>& arr)
	{
		if (this->mAddr != NULL)
		{
			delete[] this->mAddr;
		}

		int i = 0;
		this->mCapacity = arr.mCapacity;
		this->mSize = arr.mSize;

		//����������ڴ�ռ�
		this->mAddr = new T[this->mCapacity];
		for (i = 0; i < this->mSize; i++)
		{
			this->mAddr[i] = arr.mAddr[i];
		}

		return *this;
	}

	void PushBack(T& data)
	{
		//�ж��������Ƿ���λ��
		if (this->mSize >= this->mCapacity)
		{
			return;
		}

		this->mAddr[this->mSize] = data;
		this->mSize ++;
	}
	void PushBack(T&& data)
	{
		//�ж��������Ƿ���λ��
		if (this->mSize >= this->mCapacity)
		{
			return;
		}

		this->mAddr[this->mSize] = data;
		this->mSize ++;
	}
public:
	//һ������װ���ٸ�Ԫ��
	int mCapacity;
	//��ǰ�������Ԫ��
	int mSize;
	//���������ַ
	T* mAddr;
};

void test()
{
	MyArray<int> arr(20);
	int a = 10, b = 20;
	arr.PushBack(a);
	arr.PushBack(b);

	arr.PushBack(30);
	arr.PushBack(40);

	int i = 0;
	//int len = sizeof(arr) / sizeof(arr[0]);
	int len = arr.mSize;
	for (i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	test();

	system("pause");
	return 0;
}
*/