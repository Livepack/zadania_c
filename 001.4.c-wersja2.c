#include <stdio.h>

// wczytaj liczbe typu REAL z klawiatury a nastepnie wydrukuj:
// a) te liczbe;
// b) liczbe przeciwna do danej
// c) liczbe dwa razy wi�ksz�
// d) odwrotnosc danej liczby, jesli jest rozna od zera

main(){

float liczba;

printf("Podaj dowolna liczbe rzeczywista: \n");
scanf("%f", &liczba);

if (liczba==0){
    printf("Nie mozna podac odwrotnosci dla liczby '0'");
}
else {
    printf("\nLiczba przeciwna to: %f", 1/liczba);
}


}
