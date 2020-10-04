#include <stdio.h>
int main (){
	int nyawa;
	int damage;
	int serangan;
	
	while(nyawa<1||nyawa>10000||damage<1||damage>10000){
		scanf("%d %d", &nyawa, &damage);	
	}
	serangan = nyawa/damage;
	if(nyawa%damage==0){
		printf("%d", serangan);
	}else{
		printf("%d", serangan+1);
	}
	
	return 0;
}
