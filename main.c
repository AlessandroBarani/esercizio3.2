#include <stdio.h>
int main() {
    int n;
    printf("inserisci il numero desiderato: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Il numero e' negativo");
    }else {
        printf("Il numero e' positivo");
    }
    return 0;
}
