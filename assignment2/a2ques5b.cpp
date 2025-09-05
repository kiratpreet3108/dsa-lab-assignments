// 5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ
// 𝑐𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices,
// implement an efficient way that reduces the space requirement.
// (b) Tri-diagonal Matrix.

#include<iostream>
using namespace std;
struct tridiagonal
{
	int a[15];
	int n;
};
void create(struct tridiagonal *d1)
{
	int i,j,x;
	for (i=0;i<d1->n;i++)
	{
		for (j=0;j<d1->n;j++)
		{
			if (i==j)
			{
				cin>>d1->a[i];
			}
			else if (i==j+1)
			{
				cin>>d1->a[d1->n +i-1];
			}
			else if (i==j-1)
			{
				cin>>d1->a[2*(d1->n)-1+i];
			}
			else
			{
				cin>>x;
			}
		}
	}
}
void display(struct tridiagonal d1)
{
	int i,j;
	for (i=0;i<d1.n;i++)
	{
		for (j=0;j<d1.n;j++)
		{
			if (i==j)
			{
				cout<<d1.a[i]<<" ";
			}
			else if (i==j+1)
			{
				cout<<d1.a[d1.n +i-1]<<" ";
			}
			else if (i==j-1)
			{
				cout<<d1.a[2*(d1.n)-1+i]<<" ";
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<"\n";
	}
}
int main()
{
	struct tridiagonal d;
	cout<<"enter order of matrix:";
	cin>>d.n;
	cout<<"enter non-zero elements:";
	create(&d);
	display(d);
}
