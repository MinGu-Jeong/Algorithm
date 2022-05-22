#include <stdio.h>

int main(){
	int x=0, y=0, sugar=0;
	
	
	scanf("%d",&sugar);
	while(sugar>=5){
		sugar=sugar-5;
		y++;
	}
	if (sugar==0)
		printf("%d",x+y);
	
	else{
		if (sugar==3){
			x++;
			printf("%d",x+y);
		}
		else{
			while((y>0)&&(sugar%3!=0)){
				sugar=sugar+5;
				y--;
				if(sugar%3==0){
					while(sugar>=3){
						sugar=sugar-3;
						x++;
					}
				}
			
				
			}
			if(sugar==0)
				printf("%d",x+y);
			else
				printf("-1");
			
		}
	}
	
	
	
	return 0;
}