#include <stdio.h>

void organiza(int x, int y, int z, int vet1[x], int vet2[y], int vet3[z]){

int k;

// organiza vetor 3
for ( int i=0;i< x; i++ ) {
  vet3[i]= vet1[i];
}
for ( int i =x; i <y;  i++){
  
  vet3[i]= vet2[k];
  k++;
}

}
int main () {

int qtd1;
int qtd2;
int qtd_final= qtd1 + qtd2;




scanf("%d", &qtd1);
int vetor1[qtd1];
for (int i=0; i< qtd1; i++){
  scanf("%d", &vetor1[i]);
}
scanf("%d", &qtd2);
int vetor2[qtd2];
for (int i=0; i< qtd2; i++){
  scanf("%d", &vetor2[i]);
}

int vetor_resultado[qtd_final];

for(int i=0; i< qtd_final; i++){
  vetor_resultado[i] =0;
}

organiza(qtd1, qtd2, qtd_final, vetor1, vetor2, vetor_resultado);

for (int i=0; i<qtd_final; i++){
  printf("%d ", vetor_resultado[i]);
}




  return 0;
}