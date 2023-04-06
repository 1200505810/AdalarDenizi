#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int harita[MAX_SIZE][MAX_SIZE] = {
    {1, 0, 0, 0, 1, 0},
    {1, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 0},
    {1, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 1},
    {1, 1, 0, 1, 0, 0}
};

void isaret(int i, int j, int m, int n) {
    // Geçersiz durumlar kontrol ediliyor
    if (i < 0 || j < 0 || i >= m || j >= n || harita[i][j] != 1) {
        return;
    }
    
    // Ada isaretleniyor
    harita[i][j] = 2;
    
    // Komþu hücreleri kontrol ediyor
    isaret(i + 1, j, m, n);
    isaret(i, j + 1, m, n);
    isaret(i - 1, j, m, n);
    isaret(i, j - 1, m, n);
}

int main() {
	int j, i ;
    int m = 6, n = 6; // Harita boyutlarý
    int ada_sayisi = 0; // Ada sayýsý
    
    // Harita ekrana yazýlýyor
    printf("Harita:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", harita[i][j]);
        }
        printf("\n");
    }
    
    // Adalar isaretleniyor
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            if (harita[i][j] == 1) {
                isaret(i, j, m, n);
                ada_sayisi++;
            }
        }
    }
    
    // Ada sayýsý ekrana yazýlýyor
    printf("\n Ada sayisi: %d\n", ada_sayisi);
    
    return 0;
}

