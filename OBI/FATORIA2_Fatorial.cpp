#include <cstdio>

int main (){
	
	int n;
	int N = 1;
	
	scanf("%d", &n);
	
	for (int i = 1; i<=n; i++){
		N = N*i;
	}
	
	printf("%d", N);
	
	
	return 0;
}
