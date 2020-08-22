#include<cstdio>
typedef long long LL;
int main (){
	int T, tcase = 1;
	scanf("%d",&T);
	while ( T-- ){
		LL a , b , c ;
		scanf ("%lld%lld%lld", &a , &b , &c );
		if ( a + b > c){
			printf ("Case #%d: true\n", tcase++);
		}else {
			printf ("Case #%d: false\n", tcase++);
		}
	}
	return 0 ;
}
