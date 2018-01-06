#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
{
	add some thing!
		add thi
		add hello
	while(true)
	{
		int a = 0;
		char b[10] = {0};
		memset(b,0,sizeof(b));

		cout << "sizeof(b) " << sizeof(b) << endl;

		cout << "sizeof(b[10]) " << sizeof(b[9]) << endl;

		
		cout << " input a ";
		cin >> a;
		cout << "a == " << a << endl;
		
		memcpy(b,&a,1);
		int i = 0;
		while(i < 10)
		{
			printf("b [%d] = 0x%08x " ,i,b[i++]);
		}

		cout << endl;

		memset(b,0,10);

		memcpy(b,(char *) &a,sizeof(a));

		i = 0;
		
		cout << "after set " << endl;
		while(i < 10 )
		{
			printf("b [%d] = 0x%08x " ,i,b[i++]);
		}

		cout << endl;
		
	}
	return 0;
}
