
    #include <stdio.h>
#include <stdbool.h>

int main() {
    int rok_urodzenia;
    float wzrost;
   
    printf("Podaj rok urodzenia: ");
    scanf( "%d", &rok_urodzenia);

    printf("Podaj wzrost: ");
    scanf(" %f", &wzrost);

    printf("Jestem urodzony w %d roku, mam %f m wzrostu, mam prawojazdy");

    return 0;
}
