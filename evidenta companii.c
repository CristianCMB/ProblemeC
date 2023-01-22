///*Realizați un program în C care ține evidența companiilor dintr-un lanț de companii.
//Fiecare companie este descrisă de: nume, buget, profit_anual.
//Realizați un meniu interactiv cu următoarele opțiuni:
//0. Ieșire
//1. Adăugarea unei companii.
//2. Afișarea companiilor în ordine invers alfabetică după nume.
//3. Să se afișeze toate companiile care au un profit mai mare decât un profit dat
//de utilizator de la tastatură.
//4. Să se afișeze de câți biți este nevoie pentru a reprezenta în binar lungimea
//numelui fiecărei companii. Exemplu: dacă avem compania cu numele “ABC”,
//vom avea nevoie de 2 biți pentru a reprezenta lungimea, deoarece aceasta este
//egală cu 3, iar reprezentarea binară a numărul 3 este 11.
//Observații:
//- Problema se va rezolva folosind vectori de structuri definite;
//- Pentru fiecare funcționalitate se va crea o funcție;
//- Numele companiei este considerat citit corect, dacă are cel puțin 2 caractere
//și este format strict din litere mari;
//- Profitul_anual este dat automat, fiind egal cu 10% din bugetul fiecărei
//companii.*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include <math.h>
//
//typedef struct companie {
//	char nume[20];
//	int buget;
//	float profit;
//}C;
//
//int validare(char* n)
//{
//	int i, k=0,l;
//	l = strlen(n);
//	for (i = 0; i < strlen(n); i++)
//	{
//		if (n[i] <= 'Z' && n[i] >= 'A')
//			k++;
//		else
//		{
//			return 0;		}
//	}
//	if (k == l&&k>=2)
//		return 1;
//	else return 0;
//}
//void adaugare(C* comp, int* n)
//{
//	(*n)++;
//	do {
//		printf("Introdu nume companie: ");
//		scanf("%s", (comp + *n)->nume);
//	} while (validare((comp + *n)->nume) == 0);
//	printf("Introdu buget: ");
//	scanf("%d", &(comp + *n)->buget);
//	(comp + *n)->profit = (comp + *n)->buget / 10;
//}
//
//void afisare(C* comp, int n)
//{
//	int i;
//	for (i = 0; i <= n; i++)
//	{
//		printf("%s, %d, %.2f. \n", (comp + i)->nume, (comp + i)->buget, (comp + i)->profit);
//	}
//}
//
//void sort(C* comp, int n)
//{
//	C aux;
//	int i,j;
//	for (i = 0; i <= n; i++)
//		for(j=i;j<=n;j++)
//			if ((strcmp((comp + i)->nume, (comp + j)->nume))<0)
//			{
//				aux = *(comp + i);
//				*(comp + i) =*(comp + j);
//				*(comp + j) = aux;
//			}
//		afisare(comp, n);
//}
//
//void sort_p(C* comp, int n)
//{
//	int i, pr;
//	printf("Introduceti profit pt cautare:");
//	scanf("%d", &pr);
//	for (i = 0; i <= n; i++)
//		if ((comp + i)->profit > pr)
//			printf("%s, %d, %.2f. \n", (comp + i)->nume, (comp + i)->buget, (comp + i)->profit);
//}
//void biti(C* comp, int n)
//{
//	int i, l,rad;
//	for (i = 0; i <= n; i++)
//	{
//		l = strlen((comp + i)->nume);
//		rad = sqrt(l)+1;
//		printf("Pentru compania %s este nevoie de %d biti", (comp + i)->nume, rad);
//	}
//}
//int main() {
//	C* comp[20];
//	int opt, n=-1,i;
//	while (1) {
//		printf("Dati optiunea: \n");
//		scanf("%d", &opt);
//		switch (opt) {
//		case 0:afisare(comp, n);
//			break;
//		case 1:adaugare(comp, &n);
//			break;
//		case 2:sort(comp, n);
//			break;
//		case 3:sort_p(comp, n);
//			break;
//		case 4:
//			biti(comp, n);
//			break;
//		}
//	}
//	return 0;
//}
