// DSAHash.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Hash.h"
#include "MyVector.h"
using namespace std;

int main()
{
	string input;
	int n;
	cin >> n;
	MyVector<string> v(n);
	int hashCode[100000] = { 0 };
	int count = 0;
	HashTable hash(120000);
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (hash.insert(input)==2) {
			int code = hash.hash(input);
			if (hashCode[code]==0)
			{
				v.insert(v.length(), input);
				count++;
				hashCode[code] = 1;
			}
		}
	}
	for (int i = 0; i < v.length(); i++)
	{
		cout << v[i] << endl;
	}
    return 0;
}

