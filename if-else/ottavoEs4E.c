#include <stdio.h>
#include <string.h>

int main() {
    char tipologia[12];
    double importo, medBevande, medRistorazioni, sommaBevande = 0, sommaRistorazione = 0;
    int bevande = 0, ristorazione = 0;

    do {
        do {
            printf("Inserisci la tipologia di ordine");
            printf("\n-bevanda\n-ristorazione\n-esci\n");
            scanf("%s", tipologia);
            
            if (strcmp(tipologia, "esci") == 0) {
                break;  // Esci dal ciclo se l'utente inserisce "esci"
            }
            
        } while (strcmp(tipologia, "bevanda") != 0 && strcmp(tipologia, "ristorazione") != 0);

        if (strcmp(tipologia, "esci") == 0) {
            break;  // Esci dal ciclo esterno se l'utente inserisce "esci"
        }

        do {
            printf("Inserisci l'importo:");
            scanf("%lf", &importo);  // Usa %lf per leggere un double
            if (importo <= 0) {
                printf("Hai inserito un importo negativo (non valido)\n");
            }
        } while (importo <= 0);

        if (strcmp(tipologia, "bevanda") == 0) {
            sommaBevande += importo;
            bevande++;
        } else if (strcmp(tipologia, "ristorazione") == 0) {
            sommaRistorazione += importo;
            ristorazione++;
        }

    } while (strcmp(tipologia, "esci") != 0);

    if (bevande > 0) {
        medBevande = sommaBevande / bevande;
        printf("\n1) La media del costo delle bevande è: %.2f", medBevande);
    } else {
        printf("\n1) Non sono state registrate bevande.");
    }

    if (ristorazione > 0) {
        medRistorazioni = sommaRistorazione / ristorazione;
        printf("\n2) La media del costo della ristorazione è: %.2f", medRistorazioni);
    } else {
        printf("\n2) Non sono state registrate ristorazioni.");
    }

    if (bevande > ristorazione) {
        printf("\nSono state vendute più bevande.");
    } else if (ristorazione > bevande) {
        printf("\nSono state vendute più ristorazioni.");
    } else {
        printf("\nIl numero di bevande e ristorazioni vendute è uguale.");
    }

    return 0;
}
