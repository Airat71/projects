//
//  Массивы.c
//  start
//
//  Created by Ayrat Yunusov on 14/11/2019.
//  Copyright © 2019 Ayrat Yunusov. All rights reserved.
//

//#include "Массивы.h"
//#include <stdio.h>
////int A[10], B[20];
////float C[12];
////int D[4] = {2, 3, 12, 76};
//const int N = 10;
//int main()
//{
//    int i, A[N];
//    printf("Введите массив A\n");
//    for (i = 0; i < N; ++i)
//    {
//        printf("введите A[%d] =", i);
//        scanf("%d", &A[i]);
//    }
//    for (i = 0; i < N; ++i)
//    {
//        A[i] *= 2;
//        printf("\nРезультат: %d\n", A[i]);
//    }
//    for (i = 0; i < N; ++i)
//    {
//        printf("%d ", A[i]);
//    }
//  return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//const int N = 5;
//int main()
//{
//    int A[N], res1 = 0, perm = 0, i = 0;
////    printf("Введите данные в массив:\n ");
//    for (int i = 0; i < N; ++i)
//    {
//        printf("\nВведите данные: A[%d]= ", i);
//        scanf("%d", &A[i]);
//    }
//    for (int i = 0; i < N; ++i)
//    {
//        A[i] *= 2;
//        printf("%d ", A[i]);
//    }
//    printf("%d ", A[i]);
//    printf("\nA[2] = %d\n", A[2]);
//    return 0;
//}

//  Заполнение массива в ручную!!!
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//const int N = 5;
//int main()
//{
////    srand(time(NULL));
//    int i = 0, A[N];
//    for (i = 0; i <= N; ++i)
//    {
//        printf("Введите число в массив: A[%d] =  \n", i);
//        scanf("%d", &A[i]);
//    }
//    for (i = 0; i <= N; ++i)
//    {
//        A[i] -= 1;
//        printf("%d ", A[i]);
//    }
//
//    return 0;
//}
// Заполнение массива рамдомными числами!!!
//
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//const int N = 5;
//int main()
//{
//    srand (time(NULL));
//    int i = 0, A[N], counter = 0;
//    printf("Введите массив: A\n");
//    for (i = 0; i < N; i++)
//    {
//        A[i] = rand() % 100;
//        printf("%d\n", A[i]);
//    }
//    for (i = 0; i < N; i++)
//    {
//        A[i] *= 2;
//        counter += 1;
//        printf("A [%d] = %d\n", i, A[i]);
//    }
//    printf("counter = %d\n", counter);
//    return 0;
//}
//#include <stdio.h>
//const int N = 5;
//int main()
//{
//    int A[N], i = 0,sum = 0, count = 0, count1 = 0;
//    for (i = 0; i <= N; ++i)
//    {
//        printf("Введите данные массива: A[%d]\n", i);
//        scanf("%d", &A[i]);
//    }
//    for (i = 0; i <= N; ++i)
//    {
//        sum += A[i];
//        count += 1;
//
//    }
//    for (i = 0; i <= N; ++i)
//    {
//        if (A[i] % 2 == 0)
//        {
//            count1 += 1;
//        }
//    }
//    printf("sum = %d\n", sum);
//    printf("count = %d\n", count);
//    printf("count1 = %d\n", count1);
//    return 0;
//}
//#include <stdio.h>
//const int N = 5;
//int main ()
//{
//    int A[N], i = 0, max = 0;
//    for (i = 0; i <= N; ++i)
//    {
//    printf("Введите элементы массива: A[%d]\n", i);
//    scanf("%d", &A[i]);
//
//    }
//    for (i = 0; i <= N; ++i)
//    {
//        printf("A[%d] = %d\n", i, A[i]);
//        if (max < A[i])
//        {
//            max = A[i];
//        }
//    }
//
//    printf("max = %d\n", max);
//    return 0;
//}

// Перестановка элементов массива! ИНВЕРСИЯ!
//#include <stdio.h>
//const int N = 10;
//int main()
//{
//    int a[N], perm;
//    for (int i = 0; i <N; ++i)
//    {
//        printf("Заполните массив; a[%d] =\n", i);
//        scanf("%d", &a[i]);
//    }
//    for (int i = 0; i < N / 2; ++i)
//    {
//        perm = a[i];
//        a[i] = a[N - 1 -i];
//        a[N - 1 -i] = perm;
//    }
//    for (int i = 0; i < N; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//        return 0;
//}
//perm = a[1];
//a[1] = a[4];
//a[4] = perm;
//printf( "a[%d] = %d\na[%d] = %d\n", a[1], i, a[4], i);

// ПОИСК ОДНОГО ЭЛЕМЕНТА!
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//const int N = 10;
//int main()
//{
//    srand (time(NULL));
//    int A[N], X, i = 0, success = 0;
//    printf("Введите значение X:\n");
//    scanf("%d", &X);
//

//    for (i = 0; i < N; ++i)
//    {
//        printf("Введите элементы массива:A[%d] = ", i);
//        A[i] = rand()% 10;
//        printf("%d\n", A[i]);
//
//    }
//    for (i = 0; i < N; ++i)
//    {
//        if (A[i] == X)
//        {
//            success = 1;
//            break;
//        }
//    }
//    if (success)
//        printf("A[%d] = %d\n", i, A[i]);
//
//    else
//        printf("Элемент %d не найден\n", X);
//
//    return 0;
//}
//// Работа с текстовыми файлами!
//// Массив известного размера!  Не работает!
//#include <stdio.h>
//const int N = 10;
//int main ()
//{
//    int i, A[N];
//    FILE *fp;
//    fp = fopen ("input.dat.xlsx", "r");
//    if (fp == NULL)
//    {
//        printf("Нет файла данных\n");
//        return 1;
//    }
//    for (i = 0; i < N; ++i)
//    {
//        if (1 != fscanf(fp, "%d", &A[i]))
//        {
//            printf("Не хватает данных в файле");
//            return 1;
//        }
//        fclose (fp);
//    }
//    for (i = 0; i < N; ++i)
//    {
//        A[i] = A[i] * 2;
//        fp = fopen("output.dat", "w");
//    }
//    for (i = 0; i < N; ++i)
//    {
//        fprintf(fp, "%d\n", A[i]);
//        fclose (fp);
//    }
//    return 0;
//}
// Поиск элементов соответствующих условию!

//#include <stdio.h>
//const int N = 10;
//int main()
//{
//    int i, A[N], perm;
//    printf("Заполните массив:\n");
//    for (i = 0; i < N; ++i)
//    {
//        printf("Введите значение: A[%d] = ", i);
//        scanf("%d", &A[i]);
//    }
//    for (i = 0; i < N; ++i)
//    {
//        A[i] *= 2;
//    }
//
//    for (i = 0; i < N; ++i)
//    {
//        printf("%d ", A[i]);
//    }
//    for (i = 0; i < N / 2; ++i)
//    {
//        perm = A[i];
//        A[i] = A[N - 1 - i];
//        A[N - 1 - i] = perm;
//
//    }
//    for (i = 1; i < N; ++i)
//    {
//        printf("%d ", A[i]);
//    }
//    return 0;
//}
// Поиск минимального элемента и его номер!
//#include <stdio.h>
//const int N = 5;
//int main ()
//{
//    int i = 0, A[N], nMin = 0;
//    printf("Заполните массив:\n");
//    for (i = 0; i < N; ++i)
//    {
//        printf("A[%d] = ", i);
//        scanf("%d", &A[i]);
//    }
//    for (i = 0; i < N; ++i)
//    {
//        if ( A[i] < A[nMin])
//            nMin = i;
//    }
//    printf("\nМинимальный элемент A[%d] = %d\n", nMin, A[nMin]);
//
//}
// Формирование массива по заданному условию!
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//const int N = 5;
//int main ()
//{
//    int A[N], B[N], i = 0, count = 0;
//    printf("\nВведите данные массива: A");
//    for (i = 0; i < N; ++i)
//    {
//        printf("\nA[%d] = ", i);
//        scanf("%d", &A[i]);
//    }
//    for (i = 0; i < N; ++i)
//    {
//    if (A[i] > 0)
//    {
//        B[count] = A[i];
//        count ++;
//    }
//    }
//    for  (i = 0; i < count; ++i)
//    {
//    printf("%d\n", B[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//const int N = 10;
//int main()
//{
//    int A[N], i = 0;
//    printf("Введите данные массива:\n");
//    for (i = 0; i < N; ++i)
//    {
//        printf("\nA = A[%d] = ", i);
//        scanf("%d", &A[i]);
//    }
//}
/* Array 1. Дано целое число N (>0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . .*/
//#include <stdio.h>
//const int N = 10;
//int main()
//{
//    int A[N], i = 0;
//    printf("Введите данные массива:\n");
//    for (i = 0; i < N; ++i)
//    {
//        printf("\nA = A[%d] = ", i);
//        scanf("%d", &A[i]);
//    }
//
//}
//#include <stdio.h>
//int main()
//{
//    int  A[10] = {2, 34, 54, 7, -3, -8, 45, 34, 7,19}, x;
//    x = A[4] + A[9];
//    printf("x = %d\n", x);
//    printf("A[5] = A[%d]\n", A[5]);
//    printf("A[0] = %d\n", A[0]);
//    A[0] = 125;
//    printf("A[0] = %d\n", A[0]);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//const int N = 10;
//int main()
//{
//    srand(time(NULL));
//    int A[N], i;
//    printf("Введите массив A\n");
//    for (i = 0; i <= N; ++i)
//    {
//      printf("A[%d]= ", i);
//        scanf("%d", &A[i]);
//    }
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//const int N = 10;
//int main()
//{
//    int A[N] = {3, 12, 45, 234, 67, 45, 67, 875, -4, -34}, i, k;
//    int success = 0;
//    printf("Введите число k:\n");
//    scanf("%d", &k);
//    for (i = 0; i < N; ++i)
//    {
//        printf("A[%d] = %d\n",i, A[i]);
//    }
//    for (i = 0; i < N; ++i)
//    {
//        if (A[i] == k)
//            success = 1;
//            break;
//    }
//    if (success)
//            printf("\nA[%d] = %d\n", i, k);
//        else
//            printf("нет такого значения!\n");
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//const int N = 10;
//int main()
//{
//    int A[N] = {3, 12, 45, -897, 67, 45, 67, 875, -4, -34}, i, count = 0;
//    for (i = 0; i < N; ++i)
//    {
//        if(A[i] < 0)
//        {
//        printf("A[%d] = %d\n", i, A[i]);
//        ++count;
//        }
//    }
//    printf("count = %d\n", count);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//const int N = 10;
//int main()
//{
//    int A[N] = {3, 12, 45, -897, -67, 45, 67, 875, -4, -34}, i, count = 0, B[N];
//    for(i = 0; i < N; ++i)
//    {
//       printf("A[%d] = %d\n", i, A[i]);
//    }
//    for (i = 0; i < N; ++i)
//    {
//        if (A[i] > 0)
//        {
//            B[count] = A[i];
//        count++;
//
//        }
//    }
//    for (i = 0; i < count; ++i)
//    {
//    printf("B[%d] = %d\n", i, B[i]);
//    }
//    return 0;
//}
//
//
////printf("B[%d] = %d\n", i, B[i]);
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int const N = 10;
//int main()
//{
//    srand(time(NULL));
//    int A[N], B[N], i, count = 0;
//    for(i = 0; i < N; ++i)
//    {
//        A[i] = rand() % 100;
//        printf("A[%d] = %d\n", i, A[i]);
//    }
//    for(i = 0; i < N; ++i)
//    {
//        if (A[i] > 80)
//        {
//            B[count] = A[i];
//            count++;
//        }
//    }
//        for(i = 0; i < count; ++i)
//        {
//        printf("B[%d] = %d\n", i, B[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int const N = 10;
//int main()
//{
//    srand(time(NULL));
//    int A[N], B[N], i, count = 0;
//    for (i = 0; i < N; ++i)
//    {
//        A[i] = rand() % 100;
//        printf("A[%d] = %d\n", i, A[i]);
//    }
//    for (i = 0; i < N; ++i)
//    {
//        if (A[i] > 50)
//        {
//            B[count] = A[i];
//            count++;
//        }
//    }
//        for (i = 0; i < count; ++i)
//        {
//            printf("B[%d] = %d\n", i, B[i]);
//        }
//    return 0;
//}
//  Случайное число!
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int const N = 10;
//int main()
//{
//    srand(time(NULL));
//    int A[N], i;
//    int a = -10, b = 10;
//    for (i = 0; i < N; ++i)
//    {
//        A[i] = a + rand() % (b - a);
//        printf("A[%d] = %d\n", i, A[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int const N = 10;
//int main()
//{
//    srand(time(NULL));
//    int A[N], i, c;
//    int a = 0, b = 10;
//    for (i = 0; i < N; ++i)
//    {
//        A[i] = a + rand() % (b - a);
//        printf("A[%d] = %d\n", i, A[i]);
//    }
//    for (i = 0; i < N / 2; ++i)
//    {
//        c = A[i];
//        A[i] = A[(N - 1 - i)];
//        A[(N - 1 - i)] = c;
//    }
//    for (i = 0; i < N; ++i)
//    {
//        printf("%d ", A[i]);
//    }
//    return 0;
//
//}
// Циклический сдвиг!!!!
//#include <stdio.h>
//const int N = 10;
//int main()
//{
//    int A[N], i, c;
//    printf("Введите данные в массив A:\n");
//    for(i = 0; i <N; ++i)
//    {
//        printf("A[%d] = ", i);
//        scanf("%d", &A[i]);
//    }
//    c = A[N - 1];
//    for (i = (N - 1); i > 0; --i)
//    {
//    A[i] = A[i - 1];
//    }
//    A[0] = c;
//    for (i = 0; i <N; ++i)
//    {
//    printf("%d ", A[i]);
//    }
//    return 0;
//}
//Сортировка массивов. Метод пузырька!

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int const N = 10;
//int main()
//{
//    srand(time(NULL));
//    int A[N], i, j, c;
//    int a = -100, b = 100;
//    printf("Заполните массив:\n");
//    for(i = 0; i < N; ++i){
//        A[i] = a + rand () % (b - a);
//        printf("A[%d] = %d\n", i, A[i]);
//    }
//    for (i = 0; i < N - 1; ++i)
//        for (j = N - 2; j >= i; --j)
//            if (A[j] > A[j + 1])
//            {
//                c = A[j];
//                A[j] = A[j +1];
//                A[j + 1] = c;
//            }
//    printf("Отсортированный массив:\n");
//    for (i = 0; i < N; ++i)
//        printf("%d ", A[i]);
//    return 0;
//}
//
