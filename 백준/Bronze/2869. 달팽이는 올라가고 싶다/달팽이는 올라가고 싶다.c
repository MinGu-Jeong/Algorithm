#include <stdio.h>
int main(){
    int up,down,max_height,now_height=0,day=1;
    scanf("%d %d %d",&up,&down,&max_height);

	
    day = (max_height-down-1)/(up-down)+1;
	
    printf("%d",day);
    return 0;
}