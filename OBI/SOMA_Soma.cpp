#include <cstdio>

int main(){
	
	int n, x;
	int soma = 0;
	
	scanf("%d", &n);
	
	for (int i = 1; i<=n; i++){
		
	scanf ("%d", &x);
	
	soma = soma + x;
		
	}
	
	printf("%d", soma);	
	
	return 0;
}
