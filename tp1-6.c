#include <stdio.h>
#include<ctype.h>
#include<string.h>
int login(char* l){
    int ok=1;
    if(isalpha(l[0])==0){
        printf("le login doit commencer par une lettre alphabétique\n");
        ok=0;}
    for(int i=0;i<strlen(l);i++){
        if(isalnum(l[i])== 0 ){
            printf ("svp entrer que des caractères de nature alpha-numérique\n");
            ok=0;
            break;}
    }
    return ok;
}
int pass(char* p ,char *l ){
    int ok=1;
    if(strlen(p)<10){
        printf("La taille du mot de passe doit être supérieure à 10\n");
        ok=0;}
    if (strcmp(p,l)==0){
        printf("Le mot de passe doit être différent du login\n");
        ok=0;}
    int maj=0;
    for(int i=0;i<strlen(p);i++){
        if(isupper(p[i])){
            maj=1; break;
        }
    }
    if(maj==0){
        printf("Il faut au moins une majuscule\n");
        ok=0;}
    return ok;
}
int main(void) {
    char l[100], p[100];

    printf("Login : ");
    scanf("%99s", l);
    printf("Mot de passe : ");
    scanf("%99s", p);

    int ok = login(l);
    ok= pass(p,l) && ok;
    if (ok)
        printf("Authentification reussie\n");
    else
        printf("Echec de l'authentification\n");

    return 0;
}