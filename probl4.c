///*Fie o matrice de caractere, pătratică de ordinul n, date de utilizator de la tastatură.
//Realizați un meniu interactiv cu următoarele opțiuni:
//0. Ieșire
//1. Afișarea matricei.
//2. Să se copieze într-un vector, caracterele de pe prima și ultima coloană a
//matricei, apoi să se afișeze vectorul în ordine alfabetică.
//3. Să se modifice toate caracterele de pe primul rând a matricei, în caracterul ‘A’.
//Observații:
//- Se va utiliza alocarea dinamică de memorie;
//- Pentru fiecare funcționalitate se va crea o funcție;
//- Elementele de pe ultimul rând ale matricei sunt date automat, fiind egale cu
//caracterul ‘U’;
//- Elementele matricei sunt considerate citite corect dacă sunt litere mari.*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int validare(char car)
//{
//	if (car >= 'A' && car <= 'Z')
//		return 1;
//	else return 0;
//}
//
//void citire(char** M, int n)
//{
//	int i,j;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++) {
//			if (i == n - 1 && j < n)
//				*(M + i * n + j) = 'U';
//			else
//			{
//				do {
//					printf("Introduceti caracter[%d][%d]: ", i, j);
//					getchar();
//					scanf("%c", (M + i * n + j));
//				} while (validare(*(M + i * n + j)) == 0);
//			}
//		}
//}
//
//void afisare(char** M, int n)
//{
//	int i,j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%c ", *(M + i * n + j));
//		}
//		printf("\n");
//	}
//}
//
//int ordonare(char** M, int n)
//{
//	int i, j,k=0;
//	char V[100], aux,l;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//		{
//			if (j == 0 && i < n || j==n-1&&i<n)
//			{
//				l = *(M + i * n + j);
//				V[k] = l;
//				k++;
//			}
//
//		}
//	for(i=0;i<k;i++)
//		for (j = i; j < k; j++)
//			if (V[i] > V[j])
//			{
//				aux = V[i];
//				V[i] = V[j];
//				V[j] = aux;
//			}
//	for (i = 0; i < k; i++)
//		printf("%c", V[i]);
//}
//
//void modificare(char** M, int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			if (i == 0 && j < n)
//				*(M + i * n + j) = 'A';
//}
//int main() {
//	int opt,n;
//	char **M;
//	printf("Cate elemente doriti: ");
//	scanf("%d", &n);
//	M = (char**)malloc(n *n* sizeof(char));
//	citire(M, n);
//	while (1) {
//		printf("Dati optiunea: \n");
//		scanf("%d", &opt);
//		switch (opt) {
//		case 0:
//			break;
//		case 1:afisare(M, n);
//			break;
//		case 2:ordonare(M, n);
//			break;
//		case 3:modificare(M, n);
//			break;
//		}
//	}
//	return 0;
//}