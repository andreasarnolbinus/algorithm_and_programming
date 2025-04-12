#include <stdio.h>
#define MAX_STUDENTS 5

int main() {
  // inisialisasi variable
  int score[MAX_STUDENTS];
  char name[5][100];
  double average = 0;

  printf("======================================\n");
  printf("Halo! Ini adalah program untuk menginput nilai rata-rata mahasiswa.\n");
  printf("Nilai yang akan diinput akan ditampilkan dalam bentuk tabel.\n");
  printf("======================================\n");
 
  // loop untuk menginput nilai mahasiswa
  for (int i = 0; i < MAX_STUDENTS; i++) {
    printf("Masukan nama mahasiswa: ");
    scanf(" %[^\n]", name[i]);

    printf("Masukan nilai %s (0 - 100): ", name[i]);
    scanf("%d", &score[i]);
    
    while (score[i] < 0 || score[i] > 100) {
      printf("Error: Nilai harus berada dalam rentang 0 hingga 100.\n");
      printf("Masukan nilai %s: ", name[i]);
      scanf("%d", &score[i]);
    }
    
    average += score[i];
  }
  
  // menghitung rata-rata
  average = average / MAX_STUDENTS;

  // menampilkan tabel nilai mahasiswa
  printf("\nTabel Nilai Mahasiswa:\n");
  printf("--------------------------------\n");
  printf("| No | Nama | Nilai |\n");
  printf("--------------------------------\n");

  for (int i = 0; i < MAX_STUDENTS; i++) {
    printf("| %d | %s | %d |\n", i + 1, name[i], score[i]);
  }
  printf("--------------------------------\n");

  // menampilkan rata-rata
  printf("Nilai rata-rata: %.2f\n", average);
  printf("======================================\n");


  return 0;
}