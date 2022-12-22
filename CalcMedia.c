#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Variable and function declarations
		int _mediaCalc(float x, float y);
		float n1, n2, _media;
		n1 = 0;
		n2 = 0;
		_media = 0;

	//Program
		printf("Nota 1: ");
		scanf("%f", &n1);
		
		printf("Nota 2: ");
		scanf("%f", &n2);
		
		_media = _mediaCalc(n1, n2);
		printf("A media e: %.2f\n", _media);
		
	return 0;
}
int _mediaCalc(float x, float y)
{
	float result = (x + y) / 2;
	return result;
}