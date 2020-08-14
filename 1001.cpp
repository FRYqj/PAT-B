#include<cstdio>
int main(){
	int n,times;			//times表示次数 
	scanf("%d",&n);
	for(times = 0;n != 1; times++){
		if(n%2 == 0)n /= 2;
		else n = (n*3+1)/2;
	}
	printf("%d",times);
	return 0;
}
