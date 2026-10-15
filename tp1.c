#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void exo1(int a,int b ,char o){
  switch (o){
    case 'a' : printf("resultat : %d" ,a+b); break;
    case 's' : printf("resultat : %d" ,a-b); break;
    case 'm' : printf("resultat : %d" ,a*b); break;
    case 'd' : 
      if (b!=0) { printf("result  %d", a/b); } else { printf("error"); } break;
     default : printf("operation inconnue"); break;
  }
}
void exo2(int *a,int*b){
     int tmp = *a;
     *a = *b ;
     *b = tmp ;
     printf("a : %d b : %d", *a , *b);
}
void exo3(int t[], int taille ){
    int pg=t[0];
    for(int i=0;i<taille;i++){
        if(t[i] >= pg) pg = t[i];
    }
    printf("pg is: %d \n",pg);
}
void exo4(char* chaine ){
    int t = strlen(chaine);
    for (int i=0; i< t;i++){
        printf("%c ", chaine[i]);
    }
}
void exo5(char* chaine){
    int t = strlen(chaine);
    int v=0;
    for (int i=0;i<t;i++){
       if(chaine[i]=='a'||chaine[i]=='A'||
          chaine[i]=='i'||chaine[i]=='I'||
          chaine[i]=='o'||chaine[i]=='O'||
          chaine[i]=='u'||chaine[i]=='U'||
          chaine[i]=='e'||chaine[i]=='E'||
          chaine[i]=='y'||chaine[i]=='Y')
          v++;
    }
    printf(" nmr des voyelles %d \n",v);
}
int main(){
    int q;
    while(1){
        printf("\n numero dexo (1-5): ");
        scanf("%d",&q);
        while (getchar()!= '\n');
        switch (q) {
          case 1 : {
            int a,b;
            char o;
            printf("enter 2 intgers: ");
            scanf(" %d %d", &a , &b);
            printf("enter the operation 'a,s,m,d':  ");
            scanf(" %c", &o);
            exo1(a,b,o);
            break;
          }
          case 2 :{
            int a,b;
            printf("enter 2 integers a and b : ");
            scanf(" %d %d",&a , &b);
            exo2(&a , &b);
            break;
          }
          case 3 :{
            int T[10]={};
            for(int i=0;i<10;i++){
                printf("enter T[%d]: ",i);
                scanf(" %d", &T[i]);
            }
            exo3(T,10);
            break;
          }
          case 4 :{
            char chaine[50]={};
            printf("enter a word : ");
            scanf(" %s", chaine);
            exo4(chaine);
            break;
          }
          case 5 :{
            char chaine[50]={};
            printf("enter a word : ");
            scanf(" %s", chaine);
            exo5(chaine);
            break;
          }
        }
    }
}