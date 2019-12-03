#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int const N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
   srand(time(NULL));
   int A[N], i, j, c;
   int a = -100, b = 100;
   printf("Заполните массив:\n");
   for(i = 0; i < N; ++i){
       A[i] = a + rand () % (b - a);
       printf("A[%d] = %d\n", i, A[i]);
   }
   for (i = 0; i < N - 1; ++i)
       for (j = N - 2; j >= i; --j)
           if (A[j] > A[j + 1])
           {
               c = A[j];
               A[j] = A[j +1];
               A[j + 1] = c;
           }
   printf("Отсортированный массив:\n");
   for (i = 0; i < N; ++i)
       printf("%d ", A[i]);
   return 0;
}
