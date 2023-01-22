///*Fie o matrice pătratică de ordinul n, cu elemente numere întregi, date de utilizator
//de la tastatură.
//Realizați un meniu interactiv cu următoarele opțiuni :
//0. Ieșire
//1. Afișarea matricei.
//2. Să se afișeze reprezentările binare ale elementelor din colțurile de sus ale
//matricei.Se vor utiliza operații pe biți pentru aflarea valorilor biților.
//3. Să se copieze într - un vector de numere întregi elementele de pe ultimul rând,
//apoi să se afișeze vectorul în ordine descrescătoare.
//Observații:
//-Se va utiliza alocarea dinamică de memorie;
//-Pentru fiecare funcționalitate se va crea o funcție;
//-Elementele de pe diagonala secundară ale matricei sunt date automat, fiind
//egale cu numărul 5;
//-Elementele matricei sunt considerate citite corect dacă sunt cuprinse în
//intervalul[0; 128].*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int validare(int nr)
//{
//	if (nr <= 128 && nr >= 0)
//		return 1;
//	return 0;
//}
//void afisare(int** M, int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++){
//		for (j = 0; j < n; j++)
//			printf("%d ", *(M + i * n + j));
//		printf("\n");
//	}
//}
//void sort_row(int** M, int n)
//{
//	int i, j, v[100], aux, k = 0;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			if (i == n - 1)
//			{
//				v[k] = *(M + i * n + j);
//				k++;
//}
//	for(i=0;i<n;i++)
//		for (j = i; j < n; j++)
//		{
//			aux = v[i];
//			v[i] = v[j];
//			v[j] = aux;
//		}
//	for (i = 0; i < n; i++)
//		printf("%d ", v[i]);
//	printf("\n");
//}
//void binar(int** M, int n)
//{
//	int i, j, k,aux;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			if (i == 0 && (j==0||j==n-1)){
//				aux = *(M + i * n + j);
//				for (k = 7; k >= 0; k--)
//					if (((aux >> k) & 1) == 0)
//						printf("0");
//					else printf("1");
//				printf(" ");
//				printf("%d", aux);
//				printf("\n");
//			}
//	}
//}
//
//int main() {
//	int opt,i,j,n, **M;
//	printf("Elemente matrice: ");
//	scanf("%d", &n);
//	M = (int**)malloc(n * n * sizeof(int));
//	for(i=0;i<n;i++)
//		for (j = 0; j < n; j++)
//		{
//			if (i + j == n - 1)
//				*(M + i * n + j) = 5;
//			else {
//				do {
//					printf("M[%d][%d]:", i, j);
//					scanf("%d", (M + i * n + j));
//				} while (validare(*(M+i*n+j))==0);
//			}
//		}
//	while (1) {
//		printf("Dati optiunea: \n");
//		scanf("%d", &opt);
//		switch (opt) {
//		case 0:
//			break;
//		case 1:afisare(M, n);
//			break;
//		case 2:binar(M, n);
//			break;
//		case 3:sort_row(M, n);
//			break;
//		}
//	}
//	return 0;
//}