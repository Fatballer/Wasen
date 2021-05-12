




#include "stdafx.h"
#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
#include<iostream>
//#include "boost\lambda\lambda.hpp"
//#include <iterator>
//#include <algorithm>
using namespace std;
#define MAX_SIZE 125
int num[MAX_SIZE]={ 3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48 };
int main(int argc, char** argv)
{
	//using namespace boost::lambda;
	//typedef std::istream_iterator<int> in;
	//std::for_each(in(std::cin), in(), std::cout << (_1*3)<<" ");
	int n=15;
	int count=0;

	//while (cin>>n) 
	{
		/*
		for (int i = 0; i < n; i++)
		{
			cin >> num[i];
		}*/
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i+1; j <= n - 1; j++)
			{
				if (num[j] < num[i])
				{
					int temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
				count++;
			}

		}
		for (int i = 0; i < n; i++)
		{
			cout << num[i]<<endl;
		}
	}
	printf("µü´ú´ÎÊý %d\n",count);
	system("pause");
	return 0;
}
