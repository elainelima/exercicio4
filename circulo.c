#include "circulo.h"//head 
#include <stdio.h>
#include <stdlib.h>

typedef struct Circulo
{
    float coordenada_x;//variavel para receber o valor da coordenada x
    float coordenada_y;//variavel para receber o valor da coordenada y
    float raio;// variavel para receber o valor do raio do circulo
} Circulo;

Circulo* circ_cria(float x, float y, float r){
    Circulo *circulo = malloc(sizeof(Circulo));//aloca um espaço na memória para criar o circulo
    circulo->coordenada_x = x;//atribui o valor para a coordenada x
    circulo->coordenada_y =y;//atribui o valor para a coordenada y
    circulo->raio = r;//atribui o valor para a o raio do ciculo
    return circulo;//retorna o endereço onde foi alocado as informações do circulo criado
}
void circ_libera(Circulo *c){
    free(c);//limpa a memória onde foi alocado os valores do circlo
}
float circ_area(Circulo *c){
    return 3.14159*(c->raio)*(c->raio);//retorna do valor da área do circulo
}
int circ_concentricos(Circulo *c1, Circulo *c2){
    if(c1->coordenada_x ==c2->coordenada_x && c1->coordenada_y ==c2->coordenada_y){//verifica se as coordenadas dos dois circulos são iguais para verificar se são concentricos
        return 1;//retorna 1 se for verdade
    }
    return 0;//retorna zero caso contrário
}
float circ_raio(Circulo* c){
    return c->raio;//retorna o raio do circulo informado
}