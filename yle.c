#include "yle.h"
#ifdef __linux__ 
   #include <unistd.h>
#elif _WIN32
    #include <windows.h>
#else
#endif

int main() {
  for(int i = 0; i < ROWS; i++) {
      #ifdef __linux__ 
      sleep(1);
      for(int j = 0; j < COLS; j++) {
        printf(FOREGROUND_YELLOW "%c",mat[i][j]);
      }
      printf("\n");
      #elif _WIN32
      Sleep(1000);
      system("COLOR 0E");
      for(int j = 0; j < COLS; j++) {
          printf("%c",mat[i][j]);
      }
      printf("\n");
      #else
      #endif
  }
  getchar();
  return 0;
}