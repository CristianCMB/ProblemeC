//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
///*Scrieti un program care tine evidenta calculatoarelor dintr-un magazin, pentru fiecare
//calculator specificânduse: serie_calculator, tip_procesor, memorie, hdd, monitor. 1. Adaugarea
//unui calculator
//1. Adăugarea unui calculator.
//2. Afisarea calculatoarelor.
//3. Afisarea calculatoarelor cu un anumit procesor.
//4. Cautarea unui calculator dupa serie_calculator.
//5. Stergerea unui calculator dupa serie.
//6. Stergerea calculatorelor dupa hdd și memorie.
//7. Sortarea calculatorelor după procesor și monitor.
//8.Exit */
//
//typedef struct calculatoare {
//	char serie[20];
//	char procesor[10];
//	char memorie[10];
//	char hdd[10];
//	char monitor[20];
//}C;
//
//void adaugare_pc(C* comp, int* n)
//{
//	(*n)++;
//	printf("Serie calculator:");
//	scanf("%s", (comp + *n)->serie);
//	printf("Tip procesor::");
//	scanf("%s", (comp + *n)->procesor);
//	printf("Memorie:");
//	scanf("%s", (comp + *n)->memorie);
//	printf("HDD:");
//	scanf("%s", (comp + *n)->hdd);
//	printf("Monitor:");
//	scanf("%s", (comp + *n)->monitor);
//}
//void afisare_pc(C* comp, int n)
//{
//	printf("Serie: %s, procesor: %s, memorie: %s, HDD: %s, monitor: %s\n", (comp + n)->serie, (comp + n)->procesor, (comp + n)->memorie, (comp + n)->hdd, (comp + n)->monitor);
//}
//void cautare_procesor(C* comp, int *n)
//{
//	int i;
//	char procesor[20];
//	printf("Introduceti procesor:");
//	scanf("%s", procesor);
//	for (i = 0; i <= *n; i++)
//	{
//		if (strcmp(procesor, (comp + i)->procesor) == 0)
//			afisare_pc(comp, i);
//	}
//}
//void cautare_serie(C* comp, int n, char serie[20])
//{
//	int i;
//	for (i = 0; i <= n; i++)
//		if (strcmp((comp + i)->serie, serie) == 0)
//			afisare_pc(comp, i);
//}
//
//void stergere_serie(C* comp, int* n)
//{
//	int i,j, k=0;
//	char serie[20];
//	printf("Introduceti seria pe care doriti sa o stergeti: ");
//	scanf("%s", serie);
//	for (i = 0; i <=  (*n-k); i++)
//		if (strcmp(serie, (comp + i)->serie) == 0)
//		{
//			k++;
//			for (j = i; j <= (*n - k); j++)
//				*(comp + j) = *(comp + j + 1);
//			i--;
//		}
//	*n -= k;
//}
//
//void stergere_hddSiMemorie(C* comp, int* n)
//{
//	int i, j, k = 0;
//	char hdd[10], memorie[10];
//	printf("Introdu HDD: ");
//	scanf("%s", hdd);
//	printf("Introdu memorie: ");
//	scanf("%s", memorie);
//	for (i=0;i<=(*n-k);i++)
//		if (((strcmp((comp + i)->hdd, hdd) == 0) && (strcmp((comp + i)->memorie, memorie)) == 0))
//		{
//			k++;
//				for(j=i;j<=(*n-k);j++)
//					*(comp+j)=*(comp+j+1);
//				i--;
//		}
//	*n -= k;
//}
//int main()
//{
//	C comp[20];
//	int i, n=-1, opt;
//	char serie[20];
//
//	do {
//		printf("\n1. Adăugarea unui calculator.\n");
//		printf("2. Afisarea calculatoarelor.\n");
//		printf("3. Afisarea calculatoarelor cu un anumit procesor.\n");
//		printf("4. Cautarea unui calculator dupa serie_calculator.\n");
//		printf("5. Stergerea unui calculator dupa serie.\n");
//		printf("6. Stergerea calculatorelor dupa hdd și memorie.\n");
//		printf("7. Sortarea calculatorelor după procesor și monitor.\n");
//		printf("Iesire\n");
//		printf("Alege optiunea: ");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case 1:adaugare_pc(comp, &n);
//			break;
//		case 2:
//			for (i=0;i<=n;i++)
//			afisare_pc(comp, i);
//			break;
//		case 3: 
//			cautare_procesor(comp, &n);
//			break;
//		case 4:
//			printf("Introduceti serie calculator: ");
//			scanf("%s", serie);
//			cautare_serie(comp, n, serie);
//			break;
//		case 5: stergere_serie(comp, &n);
//			break;
//		case 6: stergere_hddSiMemorie(comp, &n);
//			break;
//		case 7:
//			break;
//		}
//
//	} while (opt != 0);
//	return 0;
// }
