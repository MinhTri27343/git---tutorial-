#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int countNegs(int* a, int l, int r)
{
	if (l == r)
	{
		return a[r] < 0 ? 1 : 0;
	}
	int mid = (l + r) / 2;
	int c1 = countNegs(a, l, mid);
	int c2 = countNegs(a, mid + 1, r);
	return c1 + c2;
}
int main()
{
	int a[5] = { 0, -2, -3, 1, 2 };
	cout << countNegs(a, 0, 4);
}