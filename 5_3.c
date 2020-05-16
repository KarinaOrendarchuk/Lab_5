#include <stdio.h>
#include <math.h>

int i = 0;
int j = 0;
int n = 0;
int m = 0;
double d = 1;
double p = 0;

int chcp, chcpOut = 0;
int main(void)
{

printf("\r\nn =  ");
scanf("%d", &n);
printf("m =  ");
scanf("%d", &m);
printf("\r\n");

p=n*m;

int a[n][m];
for (int i = 0; i < n; i++)
for (int j = 0; j < m; j++) {
printf("A[%d][%d]=", i, j);
scanf("%d", &a[i][j]);
}

for (int i = 0; i < n; i++)
for (int j = 0; j < m; j++) {
d = d * a[i][j];
}

d=pow(d,1/p);
printf("Середнє геометричне = %.3lf", d);

    return 0;
}