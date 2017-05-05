#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){


	int i = 1;
	int cont = 0;
	string n;
	
	
	
	
	
	getline (cin, n);
	
	int num = atoi(n.c_str());
	
	
	const char *carac = n.c_str();
	char* k = strdup(carac);
	
	string y;
	int r;
	int soma = 0;
	
	int t = num/7;
	int tt = num%7;
	int t1 = num%11;
	int t2 = num/11;
			
	
	if (num == 2){
		printf("sim");
	}else{
		
		
	
	if (num < 59){
		
		
		while (i<=num){
			
			int div = (num % i);
			
			if ( div == 0){
				
				cont = cont + 1;
				
			}
			
			i++;
		}
		
		
		
		
		
		if (cont == 2){
			printf("sim");
		}else{
			printf("nao");
		}
		
		
		
		
		
		}else{
		

	
	
	for (i = 0; i<n.length(); i++){
	y = k[i];
	r = atoi(y.c_str());
	soma = soma + r;	
	}
	

	
		
		if (soma%3 != 0){

			if (r != 0){
		
				if ((t>7) && (tt != 0)){
				
					
								
					if ((t1 < 11 ) && (t2 != 0)){
						printf("sim");
					}else{printf("nao");}
				}else{printf("nao");}
			}else{printf("nao");}
		}else{printf("nao");}
	
	
	
	}
		
	
	}



	
	
	
	return 0;
}
