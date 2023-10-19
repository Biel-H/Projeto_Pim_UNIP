#include <stdio.h>

int main() {
    int numQuestions = 3; // Define the number of questions
    char userResponses[numQuestions]; // Array to store user responses

    printf("Quiz time!\n");

    for (int i = 0; i < numQuestions; i++) {
        printf("Question %d: ", i + 1);
        scanf(" %c", &userResponses[i]); // Read user responses as characters
    }

    // Now, you have user responses in the `userResponses` array.

    // You can use this data to create a graph or perform further analysis.

    return 0;
}