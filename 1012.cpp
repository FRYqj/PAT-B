#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int a[1050];
	for(int i=0;i!=n;i++){
		scanf("%d",&a[i]);
	}
	int z=0,x=0,c=0,b=0;
	double v=0.0;
	int xx=1,vv=0;
	for(int i=0;i!=n;i++){
		if(a[i]%5==0){
			if(a[i]%2==0){
				z+=a[i];
			}
		}else if(a[i]%5==1){
			if(xx%2==1){
				x+=a[i];
			}else{
				x-=a[i];
			}
			xx++;
		}else if(a[i]%5==2){
			c++;
		}else if(a[i]%5==3){
			v+=a[i];
			vv++;
		}else if(a[i]%5==4){
			if(a[i]>b){
				b=a[i];
			}
		}
	}
	if(z==0){
		printf("N");
	}else{
		printf("%d",z);
	}
	printf(" ");
	if(x==0){
		printf("N");
	}else{
		printf("%d",x);
	}
	printf(" ");
	if(c==0){
		printf("N");
	}else{
		printf("%d",c);
	}
	printf(" ");
	if(vv==0){
		printf("N");
	}else{
		printf("%.1f",v/vv);
	}
	printf(" ");
	if(b==0){
		printf("N");
	}else{
		printf("%d",b);
	}
	return 0;
}
