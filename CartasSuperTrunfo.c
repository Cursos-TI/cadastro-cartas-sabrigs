#include <stdio.h>

/*
Challenge 'Super Trunfo' - Countries (theme)
Step 1 - Cards register
Goal: create cards for each city using 'scanf' for data inputs
and 'printf' for output.
*/

/*
Country = 8 states, A-H
States = 4 cities, 01-04
Card code = state letter + city's number
Ex: A01, A02, B01
*/

int main()
{
  // Variables
  // Card 1
  char code_1[4];
  char city_1[20];
  char state_1[2];
  int pop_1 = 0;
  int places_1 = 0;
  float area_1 = 0;
  float pib_1 = 0;


  // Card 2
  char code_2[4];
  char city_2[20];
  char state_2[2];
  int pop_2 = 0;
  int places_2 = 0;
  float area_2 = 0;
  float pib_2 = 0;

  // Card 1
  printf("\n");
  printf("===== FILL CARD 1 =====\n");

  // City
  printf("✦ City's name: ");
  scanf("%s", city_1);

  // State
  printf("✦ State: ");
  scanf("%s", state_1);

  // Area
  printf("✦ City's area (km²): ");
  scanf("%f", &area_1);
  
  // Population
  printf("✦ Habitants' number: ");
  scanf("%i", &pop_1);

  // Turistic places
  printf("✦ Turistic places' number: ");
  scanf("%i", &places_1);

  // PIB
  printf("✦ City's PIB: ");
  scanf("%f", &pib_1);

  // Card code
  printf("✦ City's code: ");
  scanf("%s", code_1);

  // Card 2
  printf("\n");
  printf("===== FILL CARD 2 =====\n");

  // City
  printf("✦ City's name: ");
  scanf("%s", city_2);

  // State
  printf("✦ State: ");
  scanf("%s", state_2);

  // Area
  printf("✦ City's area (km²): ");
  scanf("%f", &area_2);
  
  // Population
  printf("✦ Habitants' number: ");
  scanf("%i", &pop_2);

  // Turistic places
  printf("✦ Turistic places' number: ");
  scanf("%i", &places_2);

  // PIB
  printf("✦ City's PIB: ");
  scanf("%f", &pib_2);

  // Card code
  printf("✦ City's code: ");
  scanf("%s", code_2);
  
  // Calculate new variables
  // Card 1
  float pop_density_1 = (float) pop_1 / area_1;
  float pib_pcap_1 = (float) pib_1 / pop_1;

  // Card 2
  float pop_density_2 = (float) pop_2 / area_2;
  float pib_pcap_2 = (float) pib_2 / pop_2;
  
  // Output
  // Card 1
  printf("\n");
  printf("=====  THIS IS CARD 1 =====\n");
  printf("Card code: %s\n", code_1);
  printf("City: %s | State: %s \n", city_1, state_1);
  printf("Area: %.2f km² | Population: %i | PIB: %.2f\n", area_1, pop_1, pib_1);
  printf("Places to visit: %i\n", places_1);
  printf("Population density: %.2f hab/km² | PIB per capita: R$ %.2f \n", pop_density_1, pib_pcap_1);
  
  // Card 2
  printf("\n");
  printf("===== THIS IS CARD 2 =====\n");
  printf("Card code: %s\n", code_2);
  printf("City: %s | State: %s \n", city_2, state_2);
  printf("Area: %.2f km² | Population: %i | PIB: %.2f\n", area_2, pop_2, pib_2);
  printf("Places to visit: %i\n", places_2);
  printf("Population density: %.2f hab/km² | PIB per capita: R$ %.2f \n", pop_density_2, pib_pcap_2);
  
  return 0;
} 