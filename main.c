#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float funHipotenus(float A, float B);
float funArea(float lebar, float tinggi);

int main(int argc, char** argv) {
	float lebar, tinggi; 
	float area, hipotenus;
	
	printf("Lebar : "); scanf("%f", &lebar);
	printf("Tinggi : "); scanf("%f", &tinggi);
	
    area = funArea(lebar, tinggi); 
    hipotenus = funHipotenus(lebar, tinggi);
    
    printf("Hipotenus = %0.2f\n", hipotenus);
    
    printf("Area = (1/2)*Lebar*Tinggi = %0.2f", area);
	return 0;
}

float funHipotenus(float A, float B){
	float value;
	value = sqrt(A*A+B*B);
	return value;
}

float funArea(float lebar, float tinggi){
	float hasil;
	hasil = (float) lebar*tinggi*0.5; //0.5 is 1/2
	return hasil;
}
