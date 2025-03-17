#include <stdio.h>
int main () {
float temperatura, umidade;
unsigned int estoque, estoqueMinimo = 1000

;printf (" Entre com a Temperatura: \n");
scanf("%f", &temperatura);
printf("Entre com a umidade: \n");
scanf("%f", &umidade);
printf("entre com o estoque: \n");
scanf("%u", &estoque);
 if ( temperatura > 30){
printf (" temperatura está alta \n ");}

 else {

  printf(" temperatura está dentro do parametro.\n");
 }

if (umidade > 50){
    printf("Umidade elevada. \n");
} 
else{
    printf("Umidade está dentro dos parametros. \n");
}
if (estoque < estoqueMinimo ){
    printf ("Estoque abaixo do minímo! \n");
}
else {
    printf("Estoque Normal. \n");
}

}