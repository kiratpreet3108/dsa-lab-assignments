// 5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ
// 𝑐𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices,
// implement an efficient way that reduces the space requirement.
// (e) Symmetric Matrix

#include<iostream>
using namespace std;
struct symmetric
{
	int a[15];
	int n;
};
void create(struct symmetric *d1)
{
	int i,j,x;
	for (i=0;i<d1->n;i++)
	{
		for (j=0;j<d1->n;j++)
		{
			if(i>=j)
			{
				cin>>d1->a[i*(i+1)/2+j];
			}
			else
			{
				cin>>x;
			}
		}
	}
}
void display(struct symmetric d1)
{
	int i,j;
	for (i=0;i<d1.n;i++)
	{
		for (j=0;j<d1.n;j++)
		{
			if (i>=j)
			{
				cout<<d1.a[i*(i+1)/2+j]<<" ";
			}
			else
			{
				cout<<d1.a[j*(j+1)/2+i]<<" ";
			}
		}
		cout<<"\n";
	}
}
int main()
{
	struct symmetric d;
	cout<<"enter order of matrix:";
	cin>>d.n;
	cout<<"enter elements:";
	create(&d);
	display(d);
}
