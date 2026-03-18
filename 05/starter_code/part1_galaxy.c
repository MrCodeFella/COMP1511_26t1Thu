// Space Exploration
// part1_galaxy.c
//
// This program was written by YOUR-NAME-HERE (zXXXXXXX)
// on INSERT-DATE-HERE
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy
    initialize_galaxy(galaxy);

    // TODO: Place the planets and nebulae in the galaxy
    place_planets_nebula(galaxy);

    // TODO: Place the player in the galaxy
    place_player(galaxy);

    // TODO: Place the stars in the galaxy
    place_stars(galaxy);

    // TODO: Print the map
    print_map(galaxy);

    return 0;
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}

void initialize_galaxy(struct celestial_body galaxy) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

void place_planets_nebula(struct celestial_body galaxy) {
    printf("Enter planets and nebulae:\n");
    char command;
    scanf("%c", &command);
    while (command != 'q') {
        int row;
        int col;
        if (command == 'p') {
            int points;
            scanf("%d %d %d", &row, &col, &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (command == 'n') {
            scanf("%d %d", &row, &col);
            galaxy[row][col].entity = NEBULA;
        }
        scanf("%c", &command);
    }
}

void place_player(struct celestial_body galaxy) {
    printf("Enter the starting position of the player: ");
    int row;
    int col;
    scanf("%d %d", &row, &col);
   
    while (row < 0 || row >= SIZE || col < 0 || col >= SIZE 
    || galaxy[row][col].entity != EMPTY) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf("%d %d", &row, &col);
    }

    galaxy[row][col].entity = SPACESHIP;
}

void place_stars(struct celestial_body galaxy) {
    printf("Enter the position and points of the star(s):\n");
    int row;
    int col;s
    int points;
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }
}