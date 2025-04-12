#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[10];
    int *ptr = numbers;
    
    int sum = 0;
    float average;
    
    // Inisialisasi random seed untuk generate angka random
    srand(time(NULL));
    
    // Mengisi array dengan angka random antara 0-100
    printf("Angka yang dihasilkan: ");
    for (int i = 0; i < 10; i++) {
        *(ptr + i) = rand() % 100;
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    // Menghitung jumlah semua elemen dalam array menggunakan pointer
    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }
    
    // Menghitung rata-rata
    average = (float)sum / 10;
    
    // Mencetak hasil
    printf("======================================\n");
    printf("Jumlah: %d\n", sum);
    printf("Rata-rata: %.2f\n", average);
    printf("======================================\n");
    
    return 0;
}
