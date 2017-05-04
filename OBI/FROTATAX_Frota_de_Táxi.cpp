#include <cstdio>

int main (){
	
	float A, G, Ra, Rg;
	float RendA, RendG;
	char status;
	
	
	scanf("%f", &A);
	scanf("%f", &G);
	scanf("%f", &Ra);
	scanf("%f", &Rg);
	
	RendA = Ra/A;
	RendG = Rg/G;
	
	if (RendA>RendG){
		status = 'A';
	}else{
		if (RendA<RendG){
			status = 'G';
		}else{
			status = 'G';
		}
	}
	
	
	printf("%c", status);
	
	
	return 0;
}
