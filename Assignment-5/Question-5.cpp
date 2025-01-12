#include <stdio.h>
#include <string.h>

struct Library {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int issued;
};

int main() {
    struct Library books[1000];
    int count = 0, choice;

    do {
        printf("\nMenu:\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter accession number, title, author, price, and issued status (1 for issued, 0 for not issued): ");
            scanf("%d %s %s %f %d", &books[count].accessionNumber, books[count].title, books[count].author, &books[count].price, &books[count].issued);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("Accession Number: %d, Title: %s, Author: %s, Price: %.2f, Issued: %d\n", books[i].accessionNumber, books[i].title, books[i].author, books[i].price, books[i].issued);
            }
        } else if (choice == 3) {
            char author[50];
            printf("Enter author name: ");
            scanf("%s", author);
            for (int i = 0; i < count; i++) {
                if (strcmp(books[i].author, author) == 0) {
                    printf("Title: %s\n", books[i].title);
                }
            }
        } else if (choice == 4) {
            char title[50];
            printf("Enter book title: ");
            scanf("%s", title);
            for (int i = 0; i < count; i++) {
                if (strcmp(books[i].title, title) == 0) {
                    printf("Accession Number: %d, Author: %s, Price: %.2f, Issued: %d\n", books[i].accessionNumber, books[i].author, books[i].price, books[i].issued);
                }
            }
        } else if (choice == 5) {
            printf("Total books: %d\n", count);
        } else if (choice == 6) {
            for (int i = 0; i < count; i++) {
                printf("Accession Number: %d, Title: %s, Author: %s, Price: %.2f, Issued: %d\n", books[i].accessionNumber, books[i].title, books[i].author, books[i].price, books[i].issued);
            }
        }
    } while (choice != 7);

    return 0;
}
