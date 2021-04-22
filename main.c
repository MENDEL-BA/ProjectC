#include <stdio.h>


int main()
{
   menu();

    return 0;
}
void menu()
{
    char choix, choix_entier ;
    int choixCmd;
  do {
        printf("Choisir une option dans le menu suivant : \
               \n\t 1. Nombre pasarfait ou pas parfait <1><return> \
               \n\t 2. Nombre pair ou pas pair <2><return> \
               \n\t 3. Nombre negatif ou positif <3><return> \
               \n\t 4. Nombre premier ou pas premier <4><return>\
               \n\t 5. Nombre premier ou pas premier <q><return>") ;
        printf("\n\t\t Indiquez votre choix : ") ;
        //rewind(stdin) ;
        scanf("%d", &choixCmd);
 
        printf("\n");
        
           
        switch (choixCmd)
        {
        case 1 :
            printf("Nombre pasarfait ou pas parfait") ;
             int nbr;
              printf(" Entrez un nombre: ");
              scanf("%d",&nbr);
            isParfait(nbr);
            break ;
        case 2 :
            printf("Nombre pair ou pas pair") ;
             int nbr2;
              printf(" Entrez un nombre: ");
              scanf("%d",&nbr2);
            pairOrImpair(nbr2);
            break ;
        case 3 :
            printf("Nombre negatif ou positif") ;
             int nbr3;
              printf(" Entrez un nombre: ");
              scanf("%d",&nbr3);
            negatifOrPositif(nbr3);
            break ;
        case 4 :
            printf("Nombre premier ou pas premier") ;
             int nbr4;
              printf(" Entrez un nombre: ");
              scanf("%d",&nbr4);
            isPremierOrNot(nbr);
            break ;
        }
   }  while(choix = 6);
   
}

int isParfait(int nbr){
     int somme=0, i;
  
  for(i = 1; i < nbr; ++i){
    if(nbr%i == 0){
      somme = somme + i;
    }
  }
  if(somme == nbr){
    printf(" Nombre parfait \n");
  }  
  else{
    printf(" n'est pas un Nombre parfait \n");
  }
}

int pairOrImpair(int nbr){
     
  if(nbr % 2 == 0){
    printf(" Nombre pair \n");
  }  
  else{
    printf(" Nombre impair \n");
  }
}

int negatifOrPositif(int nbr){
    
    if(nbr == 0 ) {
        printf(" Nombre neutre \n ");
    }
     
  if(nbr < 0){
    printf(" Nombre negatif \n");
  }  
  
  if(nbr > 0){
    printf(" Nombre positif \n");
  }
}

int isPremierOrNot(int nbr) {
    
    int p = 0, i;
   
   for(i=1; i<=nbr; i++)
   {
      if(nbr%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf(" Est un nombre premier. \n");
   }
   else
   {
      printf(" Est pas un nombre premier. \n");
   }
}