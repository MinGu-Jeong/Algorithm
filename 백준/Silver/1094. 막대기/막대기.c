#include <stdio.h>

int main(){
	int x;
	int cell=0;
	
	scanf("%d",&x);
	
	while(1){
		if(x%2 ==1)
			cell++;
		x = x/2;
		if(x>0)
			continue;
		else
			break;
	}
	printf("%d",cell);
}