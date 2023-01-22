//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
///*Să se scrie un program în C care permite utilizatorului gestionarea unui magazin de legume.
//Legumele sunt caracterizate de: nume, cantitate, pret. Să se realizeze un meniu interactiv care:
//1. Cititeste o nouă legumă de la tastatură. Dacă se citește o legumă care există deja la aceasta i se
//va incrementa doar cantitatea si se va modifica pretul in cazul in care este diferit de cel initial.
//2. Afisarea legumelor din magazin
//3. Sa se transforme toate vocalele litere mici din nume in litere mari.
//4. Iesire
//Observatii: Meniul se va repeta ori de cate ori doreste utilizatorul. Nu se vor folosii variabile
//globale. Se va folosii cel putin o macroinstructiune.*/
//
//typedef struct legume {
//	char leguma[20];
//	int cant;
//	int pret;
//}L;
//
//
//
//void citire_leguma(L* leg, int* n)
//{
//	char nume[20];
//	int can, pr, i, ok = 0, poz;
//
//
//	printf("Leguma dorita: ");
//	scanf("%s", nume);
//	printf("Dati cantitatea dorita: ");
//	scanf("%d", &can);
//	printf("Dati pretul dorit: ");
//	scanf("%d", &pr);
//
//	if ((*n) < 0)
//	{
//		(*n)++;
//		strcpy((leg + *n)->leguma, nume);
//		(leg + *n)->cant = can;
//		(leg + *n)->pret = pr;
//	}
//	else
//	{
//		for (i = 0; i <= *n; i++)
//			if (strcmp(nume, (leg + i)->leguma) == 0)
//			{
//				ok = 1;
//				poz = i;
//			}
//		if (ok)
//		{
//			(leg + poz)->cant = (leg + poz)->cant + can;
//			(leg + poz)->pret = pr;
//		}
//		else
//		{
//			(*n)++;
//			strcpy((leg + *n)->leguma, nume);
//			(leg + *n)->cant = can;
//			(leg + *n)->pret = pr;
//		}
//	}
//}
//
//void afisare(L* leg, int n)
//{
//	printf("Leguma: %s, cantitate: %d, pret: %d\n", (leg + n)->leguma, (leg + n)->cant, (leg + n)->pret);
//}
//
//void vocale(L* leg, int n)
//{
//	int i, j, c = 0;
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 0; j <= strlen((leg + i)->leguma); j++)
//		{
//			if ((leg + i)->leguma[j] == 'a' || (leg + i)->leguma[j] == 'e' || (leg + i)->leguma[j] == 'i' || (leg + i)->leguma[j] == 'o' || (leg + i)->leguma[j] == 'u')
//				(leg + i)->leguma[j] = toupper((leg + i)->leguma[j]);
//		}
//	}
//	for (i = 0; i <= n; i++) {
//		afisare(leg, i);
//	}
//
//}
//int main()
//{
//	L leg[20];
//	int n = -1, i, opt;
//
//	do {
//		printf("\n1. Cititeste o noua leguma de la tastatura. Daca se citeste o leguma care exista deja la aceasta i se ");
//		printf("va incrementa doar cantitatea si se va modifica pretul in cazul in care este diferit de cel initial.\n");
//		printf("2. Afisarea legumelor din magazin\n");
//		printf("3. Sa se transforme toate vocalele litere mici din nume in litere mari.\n");
//		printf("4. Iesire\n");
//		printf("Dati optiunea: ");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case 1: citire_leguma(leg, &n);
//			break;
//		case 2: for (i = 0; i <= n; i++)
//			afisare(leg, i);
//			break;
//		case 3:vocale(leg, n);
//			break;
//		}
//
//	} while (opt != 4);
//
//	return 0;
//}