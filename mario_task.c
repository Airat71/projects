#include <stdio.h>
int main()
{
	int h;
	do
	{
		printf("Height: ");
		scanf("%d", &h);
	} while(h < 1 || h > 8);


	for (int i = 1; i < h + 1; i+=1)
	{
		for (int j = 1; j < h - i + 1; j+=1)
		{
            printf(" ");
		}
		for (int k = 1; k < i + 1; k+=1) {
			printf("#");
		}
		printf("\n");
	}
	return 0;
}