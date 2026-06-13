#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){
    struct Node *head = NULL, *temp;

    // create first node
    temp = (struct Node*)malloc(sizeof(struct Node));
    head = temp;
    head->data = 10;
    head->next = NULL;

}
