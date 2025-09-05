// 4) String Related Programs
// (d) Write a program to sort the strings in alphabetical order.


#include<iostream>
using namespace std;
int main()
{
	char a[50];
	gets (a);
	int i,j;
	char t;
	for (i=0;a[i]!='\0';i++)
	{
		for (j=i+1;a[j]!='\0';j++)
		{
			if (a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	cout<<a;
}
