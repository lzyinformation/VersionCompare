// VersionCompare.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;
/************************************************************************/
/* version_old == version_new return 0
   version_old < version_new return 1
   version_old > version_new return -1*/
/************************************************************************/
const int version_compare(const string& version_old, const string& version_new)
{
	int lenf = 0;

	if (version_old.size() < version_new.size())
		lenf = version_old.size();
	else
		lenf = version_new.size();

	for (int i = 0; i < lenf; ++i)
	{
		if (version_old[i] > version_new[i])
		{
			return -1; // �°汾��
		}
		else if (version_old[i] < version_new[i])
		{
			return 1; // �°汾С
		}
		// new_version[i] == old_version[j] ������Ƚ���һλ
	}
	return 0;
}

int main()
{
	string versionold = "1.0.2.1";
	string versionnew = "2.0.2.2";
	if (version_compare(versionold, versionnew) == 1)
	{
		printf("%s > %s", versionnew.c_str(), versionold.c_str());
	}
	else
	{
		printf("%s <= %s", versionnew.c_str(), versionold.c_str());
	}
	getchar();
	return 0;
}