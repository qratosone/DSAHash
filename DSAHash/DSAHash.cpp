// DSAHash.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Hash.h"
using namespace std;
int main()
{
	string input;
	int n;
	cin >> n;
	HashTable hash(120000);
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (hash.searchFor(input))
		{
			cout << input << endl;
		}
		else
		{
			hash.insert(input);
		}
	}
    return 0;
}

