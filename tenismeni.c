/*fie un sir format din max 100 nume de tenismen.
realizati un program in c, n care sa citesti nmele de tenismen de la tastatura apoi realizati un meniu interactiv
cu urmatoarele optiuni:
0.iesire
1.afisare tenismen cititi
2. afisare tenismen in ordine alfabetica
3.afisare tenismen in ordine invers alfabetica
4.afisarea valorii binare a lungimii numelui fiecarui tenismen
5.afisare in ordine crescatoare dupa lungimea numelui fiecarui tenismen
6.copierea intr-un tablou de pointeri ai lungimii fiercarui nume de tenismen
7.afisarea sub forma de matrice a lungimii numelui cel mai mare in colturile de jos, iar in rest 0

observatii: numele este validat fiind citit corect daca incepe cu litera mare, iar in rest contine doar litere mici
se pot citi maxim 100 de nume de tenismen, iar fiecare tenismen, iar fiecare tenismen are maxim 20 de caractere
se va folosi alocarea dinamica de memorie
pt fiecare functionalitate se va crea o functie*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validare(char s[21])
{
	int i, k = 0;
	if (s[0] >= 'A' && s[0] <= 'Z') {
		for (i = 1; i < strlen(s); i++)
			if (s[i] >= 'a' && s[i] <= 'z')
				k++;
		if (k == strlen(s) - 1)
			return 1;
		else
			return 0;
	}
	else return 0;
}
void citire_ten(char** tenis, int n)
{
	char nume[21];
	int i;
	for (i = 0; i < n; i++) {
		do {

			printf("Dati numele: ");
			scanf("%s", nume);
		} while (!validare(nume));
		tenis[i] = (char*)malloc(strlen(nume) + 1);
		if (tenis[i] == NULL)
		{
			printf("Eroare");
			exit(0);
		}
		strcpy(tenis[i], nume);//alocare pt fieacre nr citit
	}
}


void afisare(char** tenis, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%s\n", *(tenis + i));
}

void ord_alf(char** tenis, int n)
{
	int i, j;
	char aux[21];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if (strcmp(*(tenis + i), *(tenis + j)) > 0)
			{
				strcpy(aux, *(tenis + i));
				strcpy(*(tenis + i), *(tenis + j));
				strcpy(*(tenis + j), aux);
			}
	for (i = 0; i < n; i++)
		printf("%s\n", *(tenis+i));
}

void ord_desc(char** tenis, int n)
{
	int i, j;
	char aux[21];
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (strcmp(*(tenis + i), *(tenis + j)) < 0)
			{
				strcpy(aux, *(tenis + i));
				strcpy(*(tenis + i), *(tenis + j));
				strcpy(*(tenis + j), aux);
			}
	for (i = 0; i < n; i++)
		printf("%s\n", *(tenis + i));
}

void binar(int nr)
{
	int i;
	for (i = 7; i >= 0; i--)
		if (((nr >> i) & 1) == 1)
			printf("1");
		else
			printf("0");
	printf("\n");
}
void lungime(char** tenis, int n)
{
	int i, j;
	char aux[21];
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (strlen( * (tenis + i))> strlen( * (tenis + j)))
			{
				strcpy(aux, *(tenis + i));
				strcpy(*(tenis + i), *(tenis + j));
				strcpy(*(tenis + j), aux);
			}
	for (i = 0; i < n; i++)
		printf("%s\n", *(tenis + i));
}

int main()
{
	int n, opt, i, j;
	char** tenis;
	do {
		printf("Dati numar de tenismen: "); scanf("%d", &n);
	} while (n < 0 || n>100);
	tenis = (char**)malloc(n * sizeof(char*));
	if(tenis==NULL)
	{
		printf("dati alocare memorie");
		exit(0);
	}
	citire_ten(tenis, n);
	do
	{
		printf("\n0.iesire\n");
		printf("1.afisare tenismen cititi\n");
		printf("2. afisare tenismen in ordine alfabetica\n");
		printf("3.afisare tenismen in ordine invers alfabetica\n");
		printf("4.afisarea valorii binare a lungimii numelui fiecarui tenismen\n");
		printf("5.afisare in ordine crescatoare dupa lungimea numelui fiecarui tenismen\n");
		printf("6.copierea intr-un tablou de pointeri ai lungimii fiercarui nume de tenismen\n");
		printf("7.afisarea sub forma de matrice a lungimii numelui cel mai mare in colturile de jos, iar in rest 0\n");
		printf("Dati optiune: ");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			afisare(tenis, n);
			break;
		case 2:
			ord_alf(tenis, n);
			break;
		case 3:
			ord_desc(tenis, n);
			break;
		case 4: for (i = 0; i < n; i++)
			binar(strlen(tenis[i]));
			break;
		case 5:lungime(tenis, n);
			break;
		case 6:
			break;
		case 7:
			break;
		default:printf("Optiune incorecta\n");
			break;
		}

	} while (opt != 0);
}