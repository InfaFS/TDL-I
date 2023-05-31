#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char cadena[100];

  if (argc==1)
    printf("Error!, no hay elementos cargados");
  else{
    for (int i =1; i<argc;i++){
    strcat(cadena,argv[i]);
    strcat(cadena," ");
  }

  printf("Cadena resultante: %s\n", cadena);
  }

 

  return 0;
}
