#include <avr/io.h>
#include <util/delay.h>

#define QNT_SENSORES 5

struct SensorDistancia{

};

struct Coordenada{
	float ponto_x;
	float ponto_y;
};

float calcularAnguloRotacao(struct Coordenada inicio, struct Coordenada fim){
	return 0;
}

float calcularDistanciaMovimento(struct Coordenada inicio, struct Coordenada fim){
	return 0;
}

float *lerDistanciaSensores(){
	float distancias_lidas[QNT_SENSORES] = {0};

	return distancias_lidas;
}

void deslocamento(float angulo_rotacao, float distancia_translacao){

}

int main (void)
{
	struct Coordenada atual, seguinte;
	
	// Lógica GA

	float angulo_rotacao = calcularAnguloRotacao(atual, seguinte);
	float distancia_translacao = calcularDistanciaMovimento(atual, seguinte);

	deslocamento(angulo_rotacao, distancia_translacao);
}