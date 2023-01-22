///*Fie o mulțime M de n caractere, date de utilizator de la tastatură.
//Realizați un meniu interactiv cu următoarele opțiuni:
//0. Ieșire.
//1. Afișarea elementelor mulțimii în ordine descrescătoare.
//2. Să se afișeze cuvânt-ul format din literele de pe poziție impară.
//3. Să se calculeze suma reprezentărilor ASCII a elementelor mulțimii, apoi să se
//afișeze reprezentarea binară a sumei. Exemplu: dacă mulțimea are elementele:
//a, b, c, atunci suma este egală cu: 97+98+99 = 294 iar în binar este
//0000000100100110. Se vor utiliza operații pe biți pentru aflarea valorilor biților.
//Observații:
//- Se va utiliza alocarea dinamică de memorie;
//- Pentru fiecare funcționalitate se va crea o funcție;
//- Ultimul element al mulțimii este dat automat, fiind egal cu caracterul ‘i’;
//- Elementele mulțimii sunt considerate citite corect, dacă sunt strict litere mici;
//- Pot fii citite maxim 50 de elemente.*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int validare(char *car)
//{
//	int i;
//		if (car >= 'a' && car <= 'z')
//			return 1;
//	return 0;
//}
//void ord(char* M, int n)
//{
//	int i, j;
//	char aux;
//	for (i=0;i<n;i++)
//		for (j = i; j < n; j++)
//		{
//			if (M[i] < M[j]) {
//				aux = M[i];
//				M[i] = M[j];
//				M[j] = aux;
//			}
//			
//		}
//	for (i = 0; i < n; i++)
//		printf("%c\n", M[i]);
//}
//void impar(char* M, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		if (M[i] % 2 == 1)
//			printf("%c\n", M[i]);
//}
//void binar(char* M, int n)
//{
//	int i,k=0,j;
//	for (i = 0; i < n; i++)
//		k += M[i];
//		for (j = 32; j > 0; j--)
//			if (((k >> j) & 1) == 0)
//				printf("0");
//			else printf("1");
//}
//int main() {
//	int opt,n,i;
//	char* M;
//	do {
//		printf("Cate caractere doriti?\n");
//		scanf("%d", &n);
//	} while (n > 50);
//	M = (char*)malloc(n * sizeof(char));
//	for (i = 0; i < n-1; i++)
//	{
//		do {
//			printf("Introdu caracter[%d]: ", i);
//			getchar();
//			scanf("%c", (M + i));
//		} while (validare(M[i]) == 0);
//		M[n - 1] = 'i';
//	}
//	while (1) {
//		printf("Dati optiunea: \n");
//		scanf("%d", &opt);
//		switch (opt) {
//		case 0:
//			break;
//		case 1:ord(M, n);
//			break;
//		case 2:impar(M, n);
//			break;
//		case 3:binar(M, n);
//			break;
//		}
//	}
//	return 0;
//}