#include <stdio.h>


int main() {
//printf("Desafio de Cartas Super Trunfo");    

//("Variaveis para a Primeira Carta");
char codigo1[4];
int Populacao1;
int PontosTuristicos1;
float Area1;
float Pib1;

//("Variaveis Para a Segunda Carta");
char codigo2[4];
int Populacao2;
int PontosTuristicos2;
float Area2;
float Pib2;

// Cadastro Da Carta 1;
printf (" Cadastro Da carta 1 \n");
printf ("Codigo Da Carta (ex: A01): ");
scanf ("%3s", &codigo1);

printf ("População: ");
scanf ("%d", &Populacao1);

printf("Área: ");
scanf ("%f", &Area1);

printf("PIb: ");
scanf ("%f", &Pib1);

printf ("Número De Pontos Turisticos: ");
scanf ("%d",&PontosTuristicos1);

//Cadastro Da Carta 2;
printf ("\n Cadastro Da Carta 2 \n");
printf ("Codigo Da Carta (ex: B02): ");
scanf ("%3s", &codigo2);

printf ("População: ");
scanf ("%d", &Populacao2);

printf("Área: ");
scanf ("%f", &Area2);

printf ("PIB: ");
scanf ("%f", &Pib2);

printf ("Número De Pontos Turisticos: ");
scanf ("%d", &PontosTuristicos2);


printf("\nCarta 1 - %s\n", codigo1);
printf("População: %d\n", Populacao1);
printf("Área: %.2f\n", Area1);
printf("PIB: %.2f bilhões\n", Pib1);
printf("Numero De Pontos Turistico: %d\n", PontosTuristicos1);

  
printf("\nCarta 2 - %s\n", codigo2);
printf("População: %d\n", Populacao2);
printf("Área: %.2f\n", Area2);
printf("PIB: %.2f bilhões\n", Pib2);
printf("Numero De Pontos Turisticos: %d\n", PontosTuristicos2);

return 0;
}
