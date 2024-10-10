#include <stdio.h>

int main () {

float prod, parc;

printf("Me diga qual foi o valor pago no produto\n");

scanf("%f", &prod);

printf("Me diga em quantas parcelas sera o pagamento\n");

scanf("%f", &parc);

printf("Voce pagara %.0f parcelas de %.2f reais", parc, prod/parc);







}