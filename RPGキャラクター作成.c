#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int intelligence, stamina, charisma;
    int total_points = 20; 
    char *character_class;

    srand(time(NULL));

    intelligence = rand() % (total_points + 1); 
    stamina = rand() % (total_points - intelligence + 1);
    charisma = total_points - intelligence - stamina; 

    if (intelligence >= stamina && intelligence >= charisma) {
        character_class = "mage";
    } else if (stamina >= intelligence && stamina >= charisma) {
        character_class = "knight"; 
    } else {
        character_class = "thief"; 
    }

    printf("Character Class: %s\n", character_class);
    printf("Stats:\n");
    printf(" - Intelligence: %d\n", intelligence);
    printf(" - Stamina: %d\n", stamina);
    printf(" - Charisma: %d\n", charisma);

    return 0;
}
