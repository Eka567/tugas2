#include <stdio.h>
#define PI 3.14159

int main() {
	float diameter = 15.0;
	float jari_jari = diameter / 2;
	float volume;
	
	volume = (4.0 / 3.0) * PI * jari_jari * jari_jari * jari_jari;
	
	printf("Volume bola: %.2f cm^3\n", volume);
	
	return 0; 
}
