#include<iostream>

constexpr int N = 3;

struct Solucao{
  int Perm[N];
  bool Usado[N];
  int U;
};

void imprime(Solucao s){
  printf("Permutacao(%d): ", N);
  for(int i=0; i<N; i++)
  printf("%d ", s.Perm[i]);
  printf("\n");
}

void GerarPermutacoes(Solucao* s){
  if(s->U == N){
    imprime(*s);
  }
  else{
    for(int i=0; i<N; i++){
      if(not s->Usado[i]){
        s->Perm[s->U] = i;
        s->Usado[i] = true;
        s->U++;
        GerarPermutacoes(s);
        s->U--;
        s->Perm[s->U] = 0;
        s->Usado[i] = false;
      }
    }      
  }
}


int main(){
  Solucao s;
  s.U = 0;
  for(int i=0; i<N; i++){
    s.Perm[i] = 0;
  }
  for(int i=0; i<N; i++){
    s.Usado[i] = false;
  }
  //imprime(s);

  GerarPermutacoes(&s);

  return 0;
};
