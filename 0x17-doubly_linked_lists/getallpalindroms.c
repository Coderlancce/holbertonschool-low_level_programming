#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	long int p;
	long long int ans,res = 0;

	for(i= 100; i<=999; i++)
	{
		for(j = 100; j<=999; j++)
		{
			ans = i*j;
			if(ans > 99999)
			{
				p = 100000;
				if ((ans%10) == (ans/p))
				{
					p /= 10;
					if (((ans/p) % 10) == ((ans%100) / 10))
					{
						if(ans > res)
						{
							res = ans;
							p /= 10;
							if((ans / p) % 10 == (ans / 100) % 10)
								printf("%d * %d = %lld\n", i, j, ans);
						}
					}
				}
			}
		}
	}
	return (0);
}
