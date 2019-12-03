#include <stdio.h>
int main()
{
	int N, max = 0, k;
	printf("N: ");
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		printf("Осталось ввести : %d\n-> ", N -i);
		scanf("%d", &k);
		if (max < k)
		{
			max = k;
		}
	}
	printf("max = %d\n", max);
	return 0;

}
#gcc -o array массивы.c
#air-ayrat:projects ayratyunusov$ subl arr.c
#(base) air-ayrat:projects ayratyunusov$ gcc -o array arr.c