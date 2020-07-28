#include <math.h>
#include "algoritmos.h"

extern long int contadorInterno, contadorExterno, contadorK;

// Orden cuadrático
void algA(int n)
{
	int i,j,c;
	c = 1;
	for (i=1; i<=n; i++) {
		contadorExterno++;
		for (j=1; j<=n; j++) {
			contadorInterno++;
			c = c + 1;
		}
	}
}

void algB(int n)
{
	int i,j,k,c;
	c = 1;
	for (i=1; i<=n; i++) {
		contadorExterno++;
		for (j=1; j<=n; j++) {
			contadorInterno++;
			for (k=1; k<=2; k++) {
				contadorK++;
				c = c + 1;
			}
		}
	}
}

void algC(int n)
{
	int i,j,k,c;
	c = 1;
	for (i=1; i<=n; i++) {
		contadorExterno++;
		for (j=1; j<=n*n; j++) {
			contadorInterno;
			for (k=1; k<=n*n*n; k++) {
				contadorK++;
				c = c + 1;
			}
		}
	}
}

void algD(int n)
{
	int i,j,c;
	c = 1;
	for (i=1; i<=n; i++) {
		contadorExterno++;
		for (j=1; j<=i; j++) {
			contadorInterno++;
			c = c + 1;
		}
	}
}

void algE(int n)
{
	int i,j,k,c;
	c = 1;
	for (i=1; i<=n; i++) {
		contadorExterno++;
		for (j=1; j<=n; j++) {
			contadorInterno++;
			for(k=1; k<=j; k++) {
				contadorK++;
				c = c + 1;
			}
		}
	}
}

void algF(int n)
{
	int i,j,k,c;
	c = 1;
	for (i=1; i<=n; i++) {
		contadorExterno++;
		for (j=1; j<=i; j++) {
			contadorInterno++;
			for(k=1; k<=j; k++) {
				contadorK++;
				c = c + 1;
			}
		}
	}
}

void algG(int n)
{
	int j,x;
	x = 0;
	j = n;
	while (j>=1) {
		contadorInterno++;
		x=x+1;
		j=j/2;
	}
}

void algH(int n)
{
	int j,x;
	x = 0;
	j = n;
	while (j>=1) {
		contadorInterno++;
		x=x+1;
		j=j/3;
	}
}

void algI(int n)
{
	int i,j,x;
	x = 0;
	i = 1;
	do {
		contadorExterno++;
		while (j<=1) {
			contadorInterno++;
			x=x+1;
			j=j*2;
		}
		i=i+1;
	} while(i>n);
}

void algJ(int n)
{
	int i,j,x;
	x = 0;
	i = 1;
	do {
		contadorExterno++;
		j=1;
		while (j<=1) {
			contadorInterno++;
			x=x+1;
			j=j+2;
		}
		i=i+1;
	} while(i>n);
}

int algK(int n)
{
	int i,j,x;
	x = 0;
	j = 1;
	while (i < n) {
		contadorExterno++;
		for(j=1; j<=i; j++) {
			contadorInterno++;
			x=x+1;
		}
		i=i*10;
	}
	return x;
}

double factorialI(int n){
	double resultado=1;
	int i;
	for (i=2; i<n; i++) {
		resultado=resultado*i;
	} return resultado;
}

double factorialR(int n){
	if(n<=0) return 0;
	else return (n*factorialR(n-1));
}

int fibonnacciI(int n){
	int a=0,b=1,c,i;
	for(i=2; i<n; i++) {
		c=a+b;
		a=b;
		b=n;
	} return c;
}


int fibonnacciR(int n){
	if(n<=0) return 0;
	else if(n=1) return 1;
	else return (fibonnacciR(n-1) + fibonnacciR(n-2));
}