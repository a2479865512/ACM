#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

long long n;
long long ans = 1;

int main()
{
	cin >> n;
	n = n * n;
	long long t = n;
	while (!(t & 1)) t >>= 1;
	for (int i = 3; i*i <= n && t > 1; i++)
	{
		int p = 0;
		while (t%i == 0)
		{
			p++;
			t /= i;
		}
		if (i % 4 == 1) ans *= (p + 1);
		else if (i % 4 == 3 && (p & 1))
		{
			ans = 0;
			break;
		}
	}
	if (t % 4 == 3) ans = 0;
	cout << ans * 4 << endl;
}
