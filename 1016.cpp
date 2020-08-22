#include<cstdio>
typedef long long LL;
int main (){
	LL A , B , DA , DB ;
	scanf ("%lld%lld%lld%lld", &A , &B , &DA, &DB );
	LL PA = 0 , PB = 0 ;
	while ( A ){
		if ( A % 10 ==DA) PA = PA * 10 + DA ;
		A /= 10 ;
	}
	while ( B ){
		if ( B % 10 ==DA) PB = PB * 10 + DB ;
		B /= 10 ;
	}
	printf ("%lld\n", PA + PB );
	return 0 ;
}
