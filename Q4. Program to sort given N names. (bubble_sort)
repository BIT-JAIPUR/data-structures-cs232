// Q. Write a program to sort given N names. (use any sorting method)

#include <stdio.h>
#include <string.h>

//Program to bubble sort
void bubbleSort(char names[][100], int n) {
    char temp[100];
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    
    char names[n][100];
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    bubbleSort(names, n);

    printf("\nSorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
