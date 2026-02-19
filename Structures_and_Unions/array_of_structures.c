#include <stdio.h>
struct Book {
    char title[30];
    int price;
};
int main() {
    struct Book b[2] = {{"C Programming", 500}, {"Java Basics", 450}};
    for(int i=0; i<2; i++) {
        printf("Book: %s, Price: %d\n", b[i].title, b[i].price);
    }
    return 0;
}