#include <stdio.h>

int main(){
    
    int octavos,cuartos,semifinales,final,GANADORT,partidos;
    printf(" BIENVENIDO A LOS RESULTADOS DE LA CHAMPIONS 2018 \n");
    printf("1.octavos \n");
    printf("2.cuartos \n");
    printf("3.semifinales \n");
    printf("4.final \n");
    printf("5.GANADOR \n");
    scanf("%d",&partidos);
   
      if(partidos==1){
        printf("Schalke vs. Manchester City \n");
        printf("Atlético Madrid vs. Juventus \n");
        printf("Manchester United vs. PSG \n");
        printf("Tottenham vs. Borussia Dortmund \n");
        printf("Lyon vs. Barcelona \n");
        printf("Roma vs. Oporto \n");
        printf("Ajax vs. Real Madrid \n");
        printf("Liverpool vs Bayern Munich \n");
      }
      if(partidos==2){
        printf("Liverpool vs Oporto\n");
        printf("Tottenham vs Manchester city\n");
        printf("Ajax vs Juventus \n");
        printf("Manchester United vs Barcelona \n");
      }
      if(partidos==3){
        printf("Tottenham vs Ajax \n");
        printf("Barcelona vs Liverpool \n");
      }
      if(partidos==4){
          printf("Tottenham vs Liverpool \n");
          
      }
      if(partidos==5){
          printf("ganador Liverpool \n");
      
          
      }
      return 0;
}
