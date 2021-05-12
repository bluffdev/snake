// Linked list declaration

#include <stdlib.h>
#include <SDL2/SDL.h>

typedef struct {
    SDL_Rect body;
    struct Node* next;
} Node;

typedef struct {
    Node *head, *tail;
} Snake;

Snake* initializeSnake();
void insertBeginning(Snake* snake, int x, int y);
void insertEnd(Snake* snake, int x, int y);
void deleteBeginning(Snake* snake);
void deleteEnd(Snake* snake);
