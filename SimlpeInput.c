#include<stdio.h>
int main(){

int sum=0,num;

while (sum>=0){
	scanf("%d",&num);
	sum=sum+num;
	if(sum<0){
		break;
	}
	printf("%d\n",num);
}

}