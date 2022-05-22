#include <stdio.h>

int main(){
	int n=0;
	double score[1000]={0,};
	double new_score[1000]={0,};
	double max_score=0;
	double result=0;
	
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%lf",&score[i]);
	}

	for(int i=0;i<n;i++){
		if(score[i]>max_score)
			max_score=score[i];
	}
	
	for(int i=0;i<n;i++){
		new_score[i]=(score[i]/max_score)*100;
	}
	
	for(int i=0;i<n;i++){
		result=result+new_score[i];
	}
	
	result=result/n;
	printf("%lf",result);
	
	return 0;
}
