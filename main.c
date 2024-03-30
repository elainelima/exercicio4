#include "circulo.h"
#include<stdlib.h>
#include<stdio.h>

int main(){
    Circulo *circulo1;//define o ponteiro que armazena o tipo Circulo
    Circulo *circulo2;//define o ponteiro que armazena o tipo Circulo
    float area1, area2, raio1, raio2;//variaveis para armazanar os valores de raio e area
    circulo1 = circ_cria(10.0, 20.0, 2.0);//cria o circulo 1
    circulo2 = circ_cria(44.0, 20.0, 2.0);//cria o circulo 2
    area1 = circ_area(circulo1);//calcula area
    area1 = circ_area(circulo2);//calcula area
    raio1 = circ_raio(circulo1);//retorna o valor do raio do circulo
    raio2 = circ_area(circulo2);//retorna o valor do raio do circulo
    circ_concentricos(circulo1, circulo2);//cerifica se os circulos são concentricos
    circ_libera(circulo1);//libera a memoria onde estava armazano as informações do circulo 1
    circ_libera(circulo2);//libera a memoria onde estava armazano as informações do circulo 2
    return 0;
}