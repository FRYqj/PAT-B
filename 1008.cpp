#include<cstdio>
int main(){
	int n,m;
	int a[210];
	scanf("%d%d",&n,&m);
	for(int i=0;i!=n;i++){
		scanf("%d",&a[i]);
	}
	if(n==1){
		printf("%d",a[0]);
	}else{
	m=m%n;
	if(m<n/2){
		for(int i=n-1;i!=n-m-1;i--){
			a[i+100]=a[i];
		}
		for(int i=n-m-1;i!=-1;i--){
			a[i+m]=a[i];
		}
		for(int i=0;i!=m;i++){
			a[i]=a[i+100+n-m];
		}
	}else{
		for(int i=0;i!=m;i++){
			a[i+103]=a[i];
		}
		for(int i=0;i!=m;i++){
			a[i]=a[i+n-m];
		}
		for(int i=m;i!=n;i++){
			a[i]=a[i+103-m];
		}
	}
	for(int i=0;i!=n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}
}
