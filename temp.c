#include <stdio.h>
#include <stdbool.h>

    float temp;
    char skala;
    float wynik;

    int main() {
        printf("Podaj wartość temperatury: ");
        scanf(" %f", &temp);

        printf("Podaj skale: ");
        scanf(" %c", &skala);

        if (skala=='C'){
            wynik=temp*1.8+32;
            printf("Podana temperatura w Fahrenheitach to: %.2f", wynik);


    }

    else if (skala=='F'){
        wynik=(temp-32)/1.8;
        printf("Podana temperatura w Celciuszach to: %.2f", wynik);
    }

    return 0;
}
