#include <stdio.h>

#define MAX 1000

struct Stack {
    int top;
    int arr[MAX];
};

void init(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, int x) {
    if (s->top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = x;
}

void pop(struct Stack *s) {
    if (s->top < 0) {
        printf("Stack Underflow\n");
        return;
    }
    s->top--;
}

void display(struct Stack *s) {
    if (s->top < 0) {
        printf("Stack Empty\n");
        return;
    }
    for (int i = s->top; i >= 0; i--)
        printf("%d ", s->arr[i]);
    printf("\n");
}

int main() {
    struct Stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    display(&s);
    pop(&s);
    display(&s);
    return 0;
}
