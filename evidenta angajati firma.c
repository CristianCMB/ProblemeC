///*realizati un program in c, care tine evidenta angajatilor dintr-o firma, fiecare angajat e descris de:nume,cod de angajare,varsta,salariu
//* realizati un meniu interactiv cu urmatoarele optiuni:
//* 0.iesire
//* 1.adaugarea unui angajat
//* 2.afisare angajati
//* 3.cautarea angajatilor cu un salariu mai mare decat cel introdus
//* 4.sortarea angajatilor alfabetic dupa nume
//* 5.sortare angajati descrescator dupa salariu
//* 6.reprezentare binara pt fiecare salariu al angajatilor
//* 7.copierea intr un tablou de pointeri a primei litere din meniu angajatilor
//* 8.Afisarea unei matrici de ordin egal cu nr de anagajati ce are pe diagonala principala cel mai mare salariu, iar resul elementelor =10
//* 9.afisarea angajatilor ce au mai mult de 2 vocale in nume
//* 10.stergerea angajatilor cu varsta mai mare de 65 de ani
//* obs
//* nume:cel putin 3 caractere, incepe cu litera mare, iar restul caracterelor sunt litere mici
//* cod de angajare generat automat: Ll-nnn, unde L prima litera din nume, l a-2a litera din nume - nnn=numarul de adaugare a angajatului
//* varsta este corect, daca se afla intre intervalul 16-100
//* pt fiecare functionalitate se va crea o functie
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//typedef struct angajat {
//	char nume[30];
//	char cod[7];
//	int varsta;
//	int salariu;
//} A;
//
//int validare_nume(char* sir)
//{
//	int k = 0, i, l = 0;
//	if (sir[0] >= 'A' && sir[0] <= 'Z')
//	{
//		k = strlen(sir);
//		for (i = 1; sir[i] != '\o'; i++)
//			if (sir[i]>='a' && sir[i] <= 'z')
//				l++;
//		if (k >= 3)
//			if (k == (l + 1))
//				return 1;
//	}
//	else return 0;
//}
//
//char* generare_cod(char* nume, int n)
//{
//	char cod[7];
//	cod[0] = nume[0];
//	cod[1] = nume[1];
//	cod[2] = '-';
//	cod[3] = n / 100 + '0';
//	cod[4] = (n / 10) % 10 + '0';
//	cod[5] = n % 10 + '0';
//	cod[6] = '\0';
//	return cod;
//}
//
//void citire(A* ang, int* n)
//{
//	(*n)++;
//	printf("Dati nume: ");
//	do {
//		scanf("%s", (ang + *n)->nume); 
//	} while (validare_nume((ang + *n)->nume) == 0);
//	printf("Dati varsta: ");
//	do {
//		scanf("%d", &(ang + *n)->varsta);
//	} while ((ang + *n)->varsta < 16 || (ang + *n)->varsta>100);
//	printf("Dati salariu: ");
//	scanf("%d", &(ang + *n)->salariu);
//	strcpy((ang + *n)->cod, generare_cod((ang + *n)->nume, *n));
//	printf("Cod: %s", (ang + *n)->cod);
//}
//
//void afisare(A* ang, int n)
//{
//	printf("%s, %s, %d, %d\n", (ang + n)->nume, (ang + n)->cod, (ang + n)->varsta, (ang + n)->salariu);
//}
//
//void cautare_salariu(A* ang, int n, int sal)
//{
//	int i;
//	for (i = 0; i <= n; i++)
//		if (sal <= (ang + i)->salariu)
//			afisare(ang,i);
//}
//
//void sortare_dupaNume(A* ang, int n)
//{
//	int i,j;
//	A aux;
//	for (i = 0; i <= n; i++)
//		for(j=i;j<=n;j++)
//			if (strcmp((ang + i)->nume, (ang+j)->nume))
//			{
//			aux = *(ang + i);
//			*(ang + i) = *(ang + j);
//			*(ang + j) = aux;
//			}
//	for(i=0;i<=n;i++)
//			afisare(ang,i);
//}
//
//void sortare_dupaSalariu(A* ang, int n)
//{
//	int i, j;
//	A aux;
//	for (i = 0; i <= n; i++)
//		for (j = i; j <= n; j++)
//			if ((ang + i)->salariu < (ang + j)->salariu)
//			{
//				aux = *(ang + i);
//				*(ang + i) = *(ang + j);
//				*(ang + j) = aux;
//			}
//	for (i = 0; i <= n; i++)
//		afisare(ang, i);
//}
//
//void salariuBinar(A* ang, int n)
//{
//	int i,j;
//	for (j = 0; j <= n; j++) {
//		for (i = 31; i >= 0; i--)
//		{
//			if ((((ang + j)->salariu >> i) & 1) == 0)
//				printf("0");
//			else printf("1");
//		}
//		printf("\n");
//	}
//}
//void copiere_litera(A* ang, int n)
//{
//	int i;
//	char* tab;
//	tab = (char*)malloc(n * sizeof(int));
//	for (i = 0; i <= n; i++) {
//		*(tab+i) = (ang + i)->nume[0];
//		printf("%c ", *(tab + i));
//	}
//}
//
//void matrice(A* ang, int n)
//{
//	int i, j,max=0;
//	for(i=0;i<=n;i++)
//		if ((ang + i)->salariu > max)
//			max = (ang + i)->salariu;
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 0; j <= n; j++)
//		{
//			if (i == j)
//				printf("%d\t", max);
//			else printf("10\t");
//		}
//		printf("\n");
//	}
//
//}
//
//void vocale(A* ang, int n)
//{
//	int i, j, v = 0;
//
//	for (i = 0; i <= n; i++)
//	{
//		(ang + i)->nume[0] = tolower((ang + i)->nume[0]);
//		for (j = 0; j <= (strlen((ang + i)->nume)); j++) {
//			if ((ang + i)->nume[j] == 'a' || (ang + i)->nume[j] == 'e' || (ang + i)->nume[j] == 'i' || (ang + i)->nume[j] == 'o' || (ang + i)->nume[j] == 'u')
//				v++;
//		}
//		(ang + i)->nume[0]=toupper((ang + i)->nume[0]);
//		if (v > 2)
//			afisare(ang, i);
//		v = 0;
//	}
//}
//
//stergere_dupaVarsta(A* ang, int *n)
//{
//	int i,j,k=0;
//	for(i=0;i<=(*n-k);i++)
//		if ((ang + i)->varsta > 60)
//		{
//			k++;
//				for (j = i; j <= (*n - k); j++)
//					*(ang + j) = *(ang + j + 1);
//			i--;
//		}
//	*n -= k;
//}
//
//int main()
//{
//	A ang[30];
//	int opt, n=-1, i, sal;
//
//	do
//	{
//		printf("\n0.Iesire\n");
//		printf("1.adaugarea unui angajat\n");
//		printf("2.afisare angajati\n");
//		printf("3.cautarea angajatilor cu un salariu mai mare decat cel introdus\n");
//		printf("4.sortarea angajatilor alfabetic dupa nume\n");
//		printf("5.sortare angajati descrescator dupa salariu\n");
//		printf("6.reprezentare binara pt fiecare salariu al angajatilor\n");
//		printf("7.copierea int un tablou de pointeri a primei litere din meniu angajatilor\n");
//		printf("8.Afisarea unei matrici de ordin egal cu nr de anagajati ce are pe diagonala principala cel mai mare salariu, iar resul elementelor =10\n");
//		printf("9.afisarea angajatilor ce au mai mult de 2 vocale in nume\n");
//		printf("10.stergerea angajatilor cu varsta mai mare de 65 de ani\n");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case 1: citire(ang, &n);
//			break;
//		case 2: for (i = 0; i <= n; i++)
//			afisare(ang, i);
//			break;
//		case 3:
//			printf("Introduceti un salariu: ");
//			scanf("%d", &sal);
//			cautare_salariu(ang, n, sal);
//			break;
//		case 4:
//			sortare_dupaNume(ang, n);
//			break;
//		case 5:
//			sortare_dupaSalariu(ang, n);
//			break;
//		case 6:
//			salariuBinar(ang, n);
//			break;
//		case 7:
//			copiere_litera(ang, n);
//			break;
//		case 8:
//			matrice(ang, n);
//			break;
//		case 9:
//			vocale(ang, n);
//			break;
//		case 10:
//			stergere_dupaVarsta(ang, &n);
//			break;
//		}
//	} while (opt != 0);
//	return 0;
//}
