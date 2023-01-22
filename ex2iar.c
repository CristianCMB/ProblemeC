////Fie un șir de N rase de câini(ex.: pitbull, ciobănesc mioritic, maidanez,
////        bichon, pug) citit de utilizator de la tastatură.Realizați un meniu interactiv
////cu următoarele opțiuni.
////0. Ieșire
////1. Afișarea șirului de rase de câini.
////2. Afișarea șirului în ordine crescătoare după lungimea de caractere.
////3. Afișarea rasei / raselor de câini ce are cele mai multe vocale.
////4. Să se copieze în ordine inversă într - un vector de caractere rasa de câine
////        ce are lungimea de caractere cea mai mică.Obs.Nu este permisă
////        folosirea funcțiilor predefinite în lucrul cu șiruri de caractere.
////5. Să se reprezinte în binar fiecare lungime de rasă de câini.
////6. Să se afișeze între ce puteri a lui 2 se găsește fiecare lungime de rasă
////de câini.Exemplu: daca lungimea este egală cu 8 atunci intervalul de
////        puteri a lui 2 în care se găsește este : [8; 16).
////7. Să se pună pe diagonala principală a unei matrice suma lungimilor de
////rase de câini, iar pe restul elementelor să se pună 10. Ordinul matricei
////este dat de numărul de rase de câini citite.
////Observații:
////Rasa de câine citită este validată astfel încât să conțină strict litere mici.
////Prima rasă se va da automat fiind egală cu Pitbull.
////Se pot citii maxim 100 de rase de câinii, iar lungimea rasei este de maxim 20
////de caractere.
////Se va lucra cu alocarea dinamică de memorie.
////Pentru fiecare funcționalitate se va crea o funcție.
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//int validare(char nume[21])
//{
//    int i, ok = 0;
//    for (i = 0; i < strlen(nume); i++) {
//        if (!(nume[i] >= 'a' && nume[i] <= 'z'))
//            ok++;
//        if (ok == 0) 
//            return 1;
//        else { 
//            printf("Numele trebuie scris cu litera mica\n"); 
//            return 0; }
//    }
//}
//
//void citire_nume(char** caini, int n) {
//    int i;
//    char nume[21];
//    for (i = 0; i < n; i++) {
//        do {
//            printf("Dati nume pentru caini:");
//            scanf("%s", nume);
//        } while (validare(nume) == 0);
//        caini[i] = (char*)malloc(strlen(nume) + 1);
//        strcpy(caini[i], nume);
//    }
//
//}
//
//void afisare_nume(char** caini, int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        printf("%s\n", *(caini + i));
//}
//
//void ordine_crescatoare(char** caini, int n)
//{
//    int i, j;
//    char aux[21];
//    for (i = 0; i < n; i++)
//       for(j=i+1;j<n;j++)
//        if (strlen(* (caini + i)) > strlen (* (caini + j))) {
//            strcpy(aux, *(caini + i));
//            strcpy(*(caini + i), *(caini+j));
//            strcpy(*(caini + j), aux);
//        }
//    for (i = 0; i < n; i++)
//        printf("%s, ", *(caini + i));
//
//}
//void vocale(char** caini, int n)
//{
//    int i,j, count=0;
//    char aux[21];
//    for(i=0;*(caini+i)=!'\n'; i++)
//            if (*(caini + i) == 'a' || *(caini + i) == 'e' || *(caini + i) == 'i' || *(caini + i) == 'o' || *(caini + i) == 'u')
//                count++;
//        printf("%d", count);
//}
//
//void lungime_binar(char** caini, int n)
//{
//    int i, j,k;
//    for (i = 0; i < n; i++) {
//        for (j = 31; j>=0; j--)
//        {
//            k = strlen(*(caini + i));
//            if (((k>>j)&1)==0)
//                printf ("0");
//            else
//                printf ("1");
//        }
//        printf("\n");
//    }
//}
//
//void putere_2(char** caini, int n)
//{
//    int i, j, k;
//    for (i = 0; i < n; i++) {
//        for (j = 31; j >= 0; j--)
//        {
//            k = strlen(*(caini + i));
//            if (((k >> j) & 1) == 1)
//                break;
//
//        }
//        printf("\n");
//        printf("%d", j);
//        if (strlen(*(caini + i)) % 2 == 0)
//            printf("Vecina numarului este %d", j * 2);
//    }
//}
//
//
//int main()
//{
//    int n, opt;
//    char** caini;
//    do {
//        printf("Cati caini doresti?\n");
//        scanf("%d", &n);
//    } while (n < 0 || n>100);
//    caini = (char**)malloc(n * sizeof(char*));
//    citire_nume(caini, n);
//
//    do {
//        printf("\n0. Iesire\n");
//        printf("1. Afisarea sirului de rase de caini.\n");
//        printf("2. Afisarea sirului in ordine crescatoare după lungimea de caractere.\n");
//        printf("3. Afisarea rasei / raselor de caini ce are cele mai multe vocale.\n");
//        printf("4. Sa se copieze in ordine inversa intr - un vector de caractere rasa de caine ce are lungimea de caractere cea mai mica.\n");
//        printf("5. Sa se reprezinte in binar fiecare lungime de rasa de caini.\n");
//        printf("6. Sa se afiseze intre ce puteri a lui 2 se gaseste fiecare lungime de rasa de caini.\n");
//        printf("7. Sa se puna pe diagonala principala a unei matrice suma lungimilor de rase de caini, iar pe restul elementelor sa se puna 10. Ordinul matricei este dat de numarul de rase de caini citite.\n");
//        scanf("%d", &opt);
//        switch (opt)
//        {
//        case 1: afisare_nume(caini, n);
//            break;
//        case 2: ordine_crescatoare(caini, n);
//            break;
//        case 3:
//            break;
//        case 4:
//            break;
//        case 5:lungime_binar(caini, n);
//            break;
//        case 6:putere_2(caini, n);
//            break;
//        case 7:
//            break;
//        default: if(opt!=0)
//            printf("Optiune invalida");
//            break;
//        }
//
//    } while (opt != 0);
//    return 0;
//}