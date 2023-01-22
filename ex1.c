//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <stdbool.h>
//
//int validare(char* nume)
//{
//	int i, k = 0;
//	for (i = 1; i < strlen(nume); i++)
//	{
//		if (nume[i] >= 'a' && nume[i] <= 'z');
//		else return 0;
//		if (nume[i] == 'a' || nume[i] == 'e' || nume[i] == 'i' || nume[i] == 'o' || nume[i] == 'u')
//			k++;
//
//	}
//	if (k == 0)
//		return 0;
//}
//void citire(char** leguma, int n)
//{
//	int i;
//	for (i = 0; i < n; i++) {
//		leguma[i] = (char*)malloc(20 * sizeof(char));
//		leguma[0] = "ciresa";
//	}
//	for (i = 1; i < n; i++)
//	{
//		do {
//			printf("Leguma:");
//			scanf("%s", leguma[i]);
//		} while (validare(leguma[i]) == 0);
//	}
//}
//
//void afisare(char** leguma, int n)
//{
//	int i, j;
//	char* aux;
//	aux = (char*)malloc(20 * sizeof(char));
//	for (i = 0; i < n; i++)
//
//		for (j = i; j < n; j++)
//		{
//			if (strlen(leguma[i]) < strlen(leguma[j]))
//			{
//				aux = *(leguma + i);
//				*(leguma + i) = *(leguma + j);
//				*(leguma + j) = aux;
//			}
//		}
//
//	for (i = 0; i < n; i++)
//		printf("%s\n", leguma[i]);
//}
//
////void vocala(char* leguma, int n)
////{
////	int i, j, k=0;
////	char aux[20];
////	bool is_space = true;
////	/*for (i = 0; i < n; i++)
////	{
////		for (j = 0; j < strlen(leguma); j++)
////		{
////			if (leguma[j] == 'a' || leguma[j] == 'e' || leguma[j] == 'i' || leguma[j] == 'o' || leguma[j] == 'u')
////				aux[i] = leguma[j];
////			break;
////		}
////	}*/
////	for (i = 0; i < n; i++)
////	{
////		if ((leguma[i] == 'a' || leguma[i] == 'e' || leguma[i] == 'i' || leguma[i] == 'o' || leguma[i] == 'u') && is_space==true)
////		{
////			aux[i] = leguma[k];
////			k++;
////			is_space = false;
////		}
////		if (leguma[i] == ' ')is_space = true;
////	}
////	printf("%d", k);
////	printf("%s", aux);
////}
//void binar(char** leguma, int n)
//{
//	int i, j, ok = 0, l;
//	for (i = 0; i < n; i++)
//	{
//		l = strlen(leguma + i);
//		printf("%d", l);
//		for (j = 0; j < l; j++)
//		{
//			if (leguma[j - 1] == 'a')
//				ok = 1;
//		}
//		if (ok == 1)
//			for (j = 31; j >= 0; j--)
//			{
//				if (((l >> j) & 1) == 1)
//					printf("1");
//				else printf("0");
//			}
//		printf("\n");
//	}
//}
//int main()
//{
//	char** leguma;
//	int n, opt;
//	printf("Alegeti nr elem:");
//	scanf("%d", &n);
//	n += 1;
//	leguma = (char*)malloc(n * sizeof(char));
//	citire(leguma, n);
//	do {
//		printf("\n0.Iesire\n");
//		printf("1. Afisare fructe in ord cresc dupa lungime\n");
//		printf("2.Prima vocala din numele fructelor\n");
//		printf("3.Reprezentare binara a lungimii fructelor care se termina cu 'a'\n");
//		printf("Alege optiune: \n");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case 1:afisare(leguma, n);
//			break;
//		case 2:/*vocala(leguma, n);*/
//			break;
//		case 3:binar(leguma, n);
//			break;
//		}
//
//	} while (opt != 0);
//}