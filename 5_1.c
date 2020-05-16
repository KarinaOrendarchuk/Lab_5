#include <stdio.h>

int i=0;
int k=0;
int size=0;
int sum=0;

int main(void)
{

printf("\r\nРозмір масиву = ");
scanf ("%d", &size);

int a[size];

printf("\r\nВведіть масив цілих чисел:\r\n");
do
{
    if (i<size)
        scanf ("%d", &a[i]);
    if (a[i] > 0)
    {
        k+= 1;
        sum+=a[i];
    }
    i++;
}
while (i<size);

printf("\nКількість додатніх елементів масиву: %d\n", k);
printf("\nСума додатніх елементів масиву: %d\n", sum);

    return 0;
}