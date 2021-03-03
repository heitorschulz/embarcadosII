
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


uint32_t x[100];

typedef enum { ES, RJ, DF} estado_t;

typedef struct pessoa {
    char nome[100];
    unsigned int idade;
    estado_t     estado;
} pessoa_t;

int main(){

    pessoa_t a;

    a.idade = 20;
    strcpy(a.nome, "Heitor");
    a.estado = ES;

}