#include <stdio.h>

void writeFile(char *filename) {
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        printf("Cannot open file.\n");
        return;
    }
    char data[1000];
    printf("Enter data to write:\n");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    fclose(fp);
    printf("File written successfully.\n");
}

void appendFile(char *filename) {
    FILE *fp = fopen(filename, "a");
    if (!fp) {
        printf("Cannot open file.\n");
        return;
    }
    char data[1000];
    printf("Enter data to append:\n");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    fclose(fp);
    printf("Data appended successfully.\n");
}

void readFile(char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("File not found.\n");
        return;
    }
    char ch;
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
}

int main() {
    char filename[100];
    int choice;

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); 
    while (1) {
        printf("\n1. Write\n2. Append\n3. Read\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1: writeFile(filename); break;
            case 2: appendFile(filename); break;
            case 3: readFile(filename); break;
            case 4: return 0;
            default: printf("Invalid choice.\n");
        }
    }

    return 0;
}