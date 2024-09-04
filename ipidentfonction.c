void valider(char *ip, int a, int b, int c, int d){
    if (sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d) != 4){
        printf("<p>Erreur: Format d'adresse IP cncorrect</p>");
        printf("</body></html>");
    }

    //printf("<p>Parties: %d, %d, %d, %d</p>", a, b, c, d);

    if (a > 255 || b > 255 || c > 255 || d > 255) {
        printf("<p>Adresse IP invalide</p>");
    } else {
        identifierClasse(ip, a, b, c, d);
    }
}
void identifierClasse(char *ip, int a, int b, int c, int d) {
    if (a < 128) {
        printf("<p>La classe de %s est: Classe A</p>", ip);
    } else if (a >= 128 && a < 192) {
        printf("<p>La classe de %s est: Classe B</p>", ip);
    } else if (a >= 192 && a < 224) {
        printf("<p>La classe de %s est: Classe C</p>", ip);
    } else if (a >= 224 && a < 240) {
        printf("<p>La classe de %s est: Classe D</p>", ip);
    } else if (a >= 240 && a < 256) {
        printf("<p>La classe de %s est: Classe E</p>", ip);
    }
}
