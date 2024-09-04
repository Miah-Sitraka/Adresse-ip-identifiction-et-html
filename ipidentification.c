#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ipidentification.h"
#include "ipidentfonction.c"
int main() {
    printf("Content-Type: text/html\n\n");
///Récuperation des données du formulaire via query string    
    char *s = getenv("QUERY_STRING");
    if (s == NULL) {
        printf("<p>Erreur: QUERY_STRING est NULL</p>");
        printf("</body></html>");
        return 1;
    }
    printf("<html>\n");
    printf("<body><h1>Identification classe:</h1>");
    char ip[100];
    int a = 0, b = 0, c = 0, d = 0;  
     if (sscanf(s, "ip=%99s", ip) != 1) {
        printf("<p>Erreur: Impossible de lire l'adresse IP</p>");
        printf("</body></html>");
    }
    valider(ip,a,b,c,d);
    printf("</body></html>");
    return 0;
}
