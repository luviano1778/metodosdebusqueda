#include <stdio.h>
#define N 100
void ordIntercambio (int a[], int n);
void entradaLista (int a[], int n);
void imprimirLista (int a[], int n);
int main()
{
int n;
int v[N];
do {
printf("\nIntroduzca el n�mero de elementos: ");
scanf("%d", &n);
} while ((n < 1) && (n > N));
entradaLista(v, n);
/* muestra lista original */
printf("\nLista original de %d elementos", n);
imprimirLista(v, n);
/* ordenaci�n ascendente de la lista */
ordIntercambio(v, n);
printf("\nLista ordenada de %d elementos", n);
imprimirLista(v, n);
return 0;
}
void ordIntercambio (int a[], int n)
{
int i, j;
/* se realizan n-1 pasadas */
/* a[o], ... , a[n-2] */
for (i = 0 ; i <= n-2 ; i++)
/* coloca m�nimo de a[i+1]...a[n-1] en a[i] */
for (j = i+1 ; j <= n-1 ; j++)
if (a[i] > a[j])
{
int aux;
aux = a[i];
a[i] = a[j];
a[j]= aux ;
}
}
void imprimirLista (int a[], int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
char c;
c = (i%10==0)?'\n':' ';
printf("%c%d", c, a[i]);
}
}
void entradaLista (int a[], int n)
{
int i;
printf("\n Entrada de los elementos\n");
for (i = 0 ; i < n ; i++)
{
printf("a[%d] = ");
scanf("%d", a+i);
}
}
