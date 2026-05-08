#include <stdio.h>
#include <string.h>

int main() {

    char input[100];

    printf("===== Simple AI Chatbot =====\n");

    while(1) {

        printf("\nYou: ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = 0;

        if(strcmp(input, "hello") == 0) {
            printf("Bot: Hi! Nice to meet you.\n");
        }
        else if(strcmp(input, "how are you") == 0) {
            printf("Bot: I'm doing great!\n");
        }
        else if(strcmp(input, "what is your name") == 0) {
            printf("Bot: I'm a simple C chatbot.\n");
        }
        else if(strcmp(input, "bye") == 0) {
            printf("Bot: Goodbye!\n");
            break;
        }
        else {
            printf("Bot: Sorry, I don't understand that.\n");
        }
    }

    return 0;
}