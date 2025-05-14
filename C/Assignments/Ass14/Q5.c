// Movie Database: Create a program that uses structures to manage a movie 
// database with details like title, director, release year, and genre. Allow users 
// to add, search for, and update movie records. 

#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 20

typedef struct Movie {
    char title[50];
    char director[30];
    int year;
    char genre[20];
} Movie;

void addMovie(Movie movies[], int *count) {
    if (*count >= MAX_MOVIES) {
        printf("Movie database is full!\n");
        return;
    }

    printf("Enter movie title: ");
    scanf(" %[^\n]", movies[*count].title);

    printf("Enter director: ");
    scanf(" %[^\n]", movies[*count].director);

    printf("Enter release year: ");
    scanf("%d", &movies[*count].year);

    printf("Enter genre: ");
    scanf(" %[^\n]", movies[*count].genre);

    (*count)++;
    printf("Movie added successfully!\n");
}

void displayMovies(Movie movies[], int count) {
    if (count == 0) {
        printf("No movies in the database yet.\n");
        return;
    }

    printf("\n%-30s %-20s %-5s %-15s\n", "Title", "Director", "Year", "Genre");
    for (int i = 0; i < count; i++) {
        printf("%-30s %-20s %-5d %-15s\n", movies[i].title, movies[i].director, movies[i].year, movies[i].genre);
    }
}

void searchMovie(Movie movies[], int count) {
    if (count == 0) {
        printf("No movies available to search.\n");
        return;
    }

    char searchTitle[50];
    printf("Enter the movie title to search: ");
    scanf(" %[^\n]", searchTitle);

    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].title, searchTitle) == 0) {
            printf("\nMovie found!\n");
            printf("Title: %s\nDirector: %s\nYear: %d\nGenre: %s\n",
                   movies[i].title, movies[i].director, movies[i].year, movies[i].genre);
            return;
        }
    }

    printf("Movie not found!\n");
}

void updateMovie(Movie movies[], int count) {
    if (count == 0) {
        printf("No movies available to update.\n");
        return;
    }

    char updateTitle[50];
    printf("Enter the movie title to update: ");
    scanf(" %[^\n]", updateTitle);

    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].title, updateTitle) == 0) {
            printf("Enter new director: ");
            scanf(" %[^\n]", movies[i].director);

            printf("Enter new release year: ");
            scanf("%d", &movies[i].year);

            printf("Enter new genre: ");
            scanf(" %[^\n]", movies[i].genre);

            printf("Movie updated successfully!\n");
            return;
        }
    }

    printf("Movie not found!\n");
}

int main() {
    Movie movies[MAX_MOVIES];
    int count = 0;
    int choice;

    while (1) {
        printf("\n=== Movie Database Menu ===\n");
        printf("1. Add Movie\n");
        printf("2. Display All Movies\n");
        printf("3. Search for a Movie\n");
        printf("4. Update Movie Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMovie(movies, &count);
                break;
            case 2:
                displayMovies(movies, count);
                break;
            case 3:
                searchMovie(movies, count);
                break;
            case 4:
                updateMovie(movies, count);
                break;
            case 5:
                printf("Exiting the Movie Database. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
