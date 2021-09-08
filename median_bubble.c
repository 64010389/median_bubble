#include<stdio.h>
int main(){
	float num[10];
	int i,j,a;
	float median;
	printf("Enter Number : ");
	for(i=0;i<10;i++){
		scanf("%f",&num[i]);
	}
	for(i=0;i<10;++i){
		for(j=i+1;j<10;++j){
			if(num[i]>num[j]){
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			}
		}
	}
	median = (num[4]+num[5])/2;
	printf("%.2f",median);
	return 0;
	
}