//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
///*Să se scrie un program în C care permite utilizatorului gestionarea unei clase de elevi. Elevii sunt
//caracterizati de: nume, varsta, medie_generala. Să se realizeze un meniu interactiv care:
//1. Adaugă un nou elev de la tastatură. Elevul este considerat citit corect dacă numele începe cu
//literă mare și conține doar litere mici în rest, si vârsta este intre 8 si 17 ani. Dacă datele sunt citite
//incorect acestea se vor reciti pana se citesc corect.
//2. Afisarea elevilor din clasă în ordine crescătoare a mediei.
//3. Să se șteargă elevii care au media cea mai mica și cea mai mare din clasă.
//4. Iesire
//Observatii: Meniul se va repeta ori de cate ori doreste utilizatorul. Nu se vor folosii variabile
//globale. Se va folosii cel putin o macroinstructiune.*/
//
//typedef struct clasa_elevi{
//	char nume[20];
//	int varsta;
//	float medie;
//}E;
//
//int validare(char* val_nume)
//{
//	int i;
//	if (val_nume[0] >= 'A' && val_nume[0] <= 'Z')
//	{
//		for (i = 1; i<strlen(val_nume); i++)
//			if (val_nume[i] >= 'a' && val_nume[i] <= 'z');
//	}
//	else return 0;
//}
//
//void citire(E* elev, int* n)
//{
//	(*n)++;
//	do {
//		printf("Introdu numele elevului: ");
//		scanf("%s", (elev + *n)->nume);
//	} while (validare((elev + *n) ->nume) == 0);
//	do {
//		printf("Introdu varsta elevului: ");
//		scanf("%d", &(elev + *n)->varsta);
//	} while ((elev + *n)->varsta < 7 || (elev + *n)->varsta > 18);
//	printf("Introdu media elevului: ");
//	scanf("%f", &(elev + *n)->medie);
//}
//
//void afisare(E* elev, int n)
//{
//	printf("Nume: %s, Varsta: %d, Medie: %.2f\n", (elev + n)->nume, (elev + n)->varsta, (elev + n)->medie);
//}
//void medie(E* elev, int n)
//{
//	E aux;
//	int i,j;
//	for (i = 0; i <=n ; i++)
//		for (j = i; j <= n; j++)
//		{
//			if ((elev + i)->medie < (elev + j)->medie)
//			{
//				aux = *(elev + i);
//				*(elev + i) = *(elev + j);
//				*(elev + j) = aux;
//			}
//		}
//	for (i = 0; i <= n; i++)
//		afisare(elev, i);
//}
//
//void stergereDupaMedie(E* elev, int* n)
//{
//	float max=0, min=10;
//	int i, j, k=0;
//	for (i = 0; i <= *n; i++)
//		if ((elev + i)->medie > max)
//			max = (elev + i)->medie;
//		else
//			min = (elev + i)->medie;
//	for (i = 0; i <= (*n-k); i++)
//	{
//		if ((elev + i)->medie == max || (elev + i)->medie == min)
//		{
//			k++;
//			for (j = i; j <= (*n - k); j++)
//				*(elev + j) = *(elev + j + 1);
//			i--;
//		}
//	}
//	
//	*n -= k;
//}
//
//int main()
//{
//	E elev[20];
//	int i, n=-1, opt;
//	do {
//		printf("\n0.Iesire\n");
//		printf("1.Adauga elev\n");
//		printf("2.Afisare din clasa in ord cresc a mediei\n");
//		printf("3.Stergere elevi cea mai mare si cea mai mica medie\n");
//		printf("4.Afisare\n");
//		printf("Alege optiune: ");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case 1: citire(elev, &n);
//			break;
//		case 2:medie(elev, n);
//			break;
//		case 3: stergereDupaMedie(elev, &n);
//			break;
//		case 4: for (i = 0; i <= n; i++)
//			afisare(elev, i);	
//		}
//
//	} while (opt != 0);
//	return 0;
//
//}