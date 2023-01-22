//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
///*Să se scrie un program care ţine evidenţa Espressoarelor dintr - un magazin .
//Pentru fiecare espressor se specifică în parte : brand, număr_funcții și preț.
//Să se facă un meniu interactiv care să conţină următoarele operaţii :
//0. Ieșire
//1. Adăugarea unui nou espressor în stocul magazinului.Brand - ul espressorului este considerat citit corect
//dacă este format doar din litere mici.Numărul de funcții este considerat citit corect dacă este cuprins în
//intervalul[2; 7].
//2. Afişarea espressoarelor din magazin(Obs.: prima literă din brand - ul fiecărui espressor este
//	transformată în literă mare).
//	3. Afișarea sub forma unei matrice de ordin dat de numarul de expresoare, care are pe diagonala
//	principală numărul funcțiilor expressoarelor iar pe restul elementelor 0.
//	Observatii:
//• Programul se va implementa folosind vectori de structuri.
//• Pentru fiecare opțiune se va crea o funcție, iar variabilele se vor transmite prin adresa.
//• Nu este permisă folosirea variabilelor globale..
//• Se va crea cel puțin o macroinstrucțiune.
//• Meniul se va repeta ori de cate ori doreste utilizatorul.*/
//typedef struct espressoare_magazin {
//	char brand[20];
//	int nr_functii;
//	int pret;
//}E;
//
//int validare_brand(char* nume)
//{
//	int i,l, flag=0;
//	l = strlen(nume);
//	for (i = 0; i <= l; i++)
//	{
//		if ((nume[i] >= 'a' && nume[i] <= 'z'))
//			return 1;
//		else return 0;
//	}
//}
//int validare_functii(int* fct)
//{
//	if (fct >= 2 && fct <= 7)
//		return 1;
//	else return 0;
//}
//
//void adaugare(E* esp, int* n) {
//	(*n)++;
//	do {
//		printf("Dati brand: ");
//		scanf("%s", (esp + *n)->brand);
//	} while (validare_brand((esp + *n)->brand) == 0);
//	do {
//	printf("Dati numar de functii (intre 2-7 functii): ");
//		scanf("%d", &(esp + *n)->nr_functii);
//	} while (validare_functii((esp + *n)->nr_functii) == 0);
//	printf("Dati pret: ");
//	scanf("%d", &(esp + *n)->pret);
//
//}
//
//void afisare(E* esp, int n)
//{
//	(esp + n)->brand[0] = toupper((esp + n)->brand[0]);
//	printf("Brand: %s, numar functii: %d, pret: %d lei\n", (esp + n)->brand, (esp + n)->nr_functii, (esp + n)->pret);
//}
//
//void matrice(E* esp, int n)
//{
//	int i, j;
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 0; j <= n; j++)
//		{
//			if (i == j)
//				printf("%d ", (esp + i)->nr_functii);
//			else printf("0 ");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	E esp[20];
//	int i, n = -1, opt;
//	do {
//		printf("\n0.Iesire\n");
//		printf("1.Adaugare espressor.\n");
//		printf("Afisare espressoare\n");
//		printf("3.Afisare sub forma de matrice\n");
//		printf("Alege optiunea: ");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case 1:adaugare(esp, &n);
//			break;
//		case 2:for (i = 0; i <= n; i++)
//			afisare(esp, i);
//			break;
//		case 3: matrice(esp, n);
//			break;
//		}
//
//	} while (opt != 0);
//}