#include <stdio.h>

/*
Challenge 'Super Trunfo' - Countries (theme)
*/

/*
Country = 8 states, A-H
States = 4 cities, 01-04
Card code = state letter + city's number
Ex: A01, A02, B01
*/

// Global variables
#define MAX_CODE 4
#define MAX_CITY 20
int cards = 0;

typedef struct card
{
  char code[MAX_CODE];
  char city[MAX_CITY];
  char state;
  unsigned long int pop;
  unsigned int places;
  double area;
  double pib;
  float pop_density;
  float pib_pcap;
  float spower;
}card;

card create_card(void);
double calc_pop_density(card card);
double calc_pib_pcap(card card);
double calc_spower(card card);
void print_card(card card);
void compare(card a, card b);

int main()
{
  printf("How many cards do you wanna create? ");
  scanf("%i", &cards);

  // Array for each card
  card card_list[cards];
  
  // Create each card
  for(int i = 0; i < cards; i++)
  {
    // Header 
    printf("\n");
    printf("--------- FILL CARD %i ---------\n", (i + 1));
    
    // Create card
    card_list[i] = create_card();

    // Calculate density population
    card_list[i].pop_density = calc_pop_density(card_list[i]);
    
    // Calculate PIB per capita
    card_list[i].pib_pcap = calc_pib_pcap(card_list[i]);

    // Calculate super power
    card_list[i].spower = calc_spower(card_list[i]);
  }
  
  // Print all cards
  for (int i = 0; i < cards; i++)
  {
    print_card(card_list[i]);
  }
  
  // Compare
  compare(card_list[0], card_list[1]);

  return 0;
} 

// Functions
card create_card(void)
{
  card new_card;
  
  // City
  printf("City's name: ");
  scanf("%s", new_card.city);

  // State
  printf("State: ");
  scanf(" %c", &new_card.state);

  // Area
  printf("City's area (km²): ");
  scanf("%lf", &new_card.area);
  
  // Population
  printf("Habitants' number: ");
  scanf("%lu", &new_card.pop);

  // Turistic places
  printf("Turistic places' number: ");
  scanf("%u", &new_card.places);

  // PIB
  printf("City's PIB: ");
  scanf("%lf", &new_card.pib);

  // Card code
  printf("City's code: ");
  scanf("%s", new_card.code);

  return new_card;
}

double calc_pop_density(card card)
{
  double pop_density = (double) card.pop / card.area;
  return pop_density;
}

double calc_pib_pcap(card card)
{
  double pib_pcap = (double) card.pib / card.pop;
  return pib_pcap;
}

double calc_spower(card card)
{
  double spower = (double) card.pop + card.places + card.area + card.pib + (card.pop_density / 1) + card.pib_pcap;
  return spower;
}

void print_card(card card)
{
  printf("\n");
  printf("[%s] --------------------------------\n", card.code);
  printf("✦ %s\n", card.city);
  printf("State...................%c\n", card.state);
  printf("Population..............%lu\n", card.pop);
  printf("Places to visit.........%u\n", card.places);
  printf("Area....................%.2lf km²\n", card.area);
  printf("PIB.....................%.2lf\n", card.pib);
  printf("Pop. density............%.2lf\n", card.pop_density);
  printf("PIB per capita..........%.2lf\n", card.pib_pcap);
  printf("Super power.............%.2lf\n", card.spower);
}

void compare(card a, card b)
{
  // Header
  printf("\n");
  printf("---------------- FIGHT TIME! ----------------\n");
  
  // Population
  if (a.pop > b.pop)
  {
    printf("Population...................✔︎ %s venceu!\n", a.city);
  }
  if (a.pop < b.pop)
  {
    printf("Population...................✔︎ %s venceu!\n", b.city);
  }

  // Places to visit
  if (a.places > b.places)
  {
    printf("Places to visit..............✔︎ %s venceu!\n", a.city);
  }
  if (a.places < b.places)
  {
    printf("Places to visit..............✔︎ %s venceu!\n", b.city);
  }

  // Area
  if (a.area > b.area)
  {
    printf("Area.........................✔︎ %s venceu!\n", a.city);
  }
  if (a.area < b.area)
  {
    printf("Area.........................✔︎ %s venceu!\n", b.city);
  }

  // PIB
  if (a.pib > b.pib)
  {
    printf("PIB..........................✔︎ %s venceu!\n", a.city);
  }
  if (a.pib < b.pib)
  {
    printf("PIB..........................✔︎ %s venceu!\n", b.city);
  }

  // Population density
  if (a.pop_density > b.pop_density)
  {
    printf("Pop. density.................✔︎ %s venceu!\n", b.city);
  }
  if (a.pop_density < b.pop_density)
  {
    printf("Pop. density.................✔︎ %s venceu!\n", a.city);
  }

  // PIB per capita
  if (a.pib_pcap > b.pib_pcap)
  {
    printf("PIB per capita...............✔︎ %s venceu!\n", a.city);
  }
  if (a.pib_pcap < b.pib_pcap)
  {
    printf("PIB per capita...............✔︎ %s venceu!\n", b.city);
  }

  // Super power
  if (a.spower > b.spower)
  {
    printf("Super power..................✔︎ %s venceu!\n", a.city);
  }
  if (a.spower < b.spower)
  {
    printf("Super power..................✔︎ %s venceu!\n", b.city);
  }
}