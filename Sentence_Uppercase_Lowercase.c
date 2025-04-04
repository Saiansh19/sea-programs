#include<stdio.h>
#include<ctype.h>

int main() {
    FILE *file;
    char filename[] = "text.txt";
    char sentence[] = "Hello World! Coding is Fun.";
    char ch;
    char modifiedSentence[100];
    int i = 0;

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    fprintf(file, "%s", sentence);
    fclose(file);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (islower(ch)) {
            modifiedSentence[i++] = toupper(ch);
        } else if (isupper(ch)) {
            modifiedSentence[i++] = tolower(ch);
        } else {
            modifiedSentence[i++] = ch;
        }
    }

    modifiedSentence[i] = '\0'; // Null-terminate the modified string
    fclose(file);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    fprintf(file, "%s", modifiedSentence);
    fclose(file);

    printf("File content successfully modified.\n");

    return 0;
}
