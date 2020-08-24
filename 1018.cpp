#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	char a,b;
	int j=0,y=0,p=0;
	int jb=0,jc=0,jj=0;
	int yb=0,yc=0,yj=0;
	int temp;
	for(int i=0;i<n;i++){
		cin >>a>>b;
		temp=a-b;
		if(temp==0)p++;
		else if(temp==-7){
			j++;
			jc++;
		}else if(temp==1){
			y++;
			yb++;
		}else if(temp==-8){
			y++;
			yj++;
		}else if(temp==-1){
			j++;
			jb++;
		}else if(temp==8){
			j++;
			jj++;
		}else if(temp==7){
			y++;
			yc++;
		}
	}
	cout <<j<<' '<<p<<' '<<y<<endl;
	cout <<y<<' '<<p<<' '<<j<<endl;
	if(jb>=jj&&jb>=jc)cout <<'B'<<' ';
	else if(jc>=jj)cout <<'C'<<' ';
	else cout <<'J'<<' ';
	if(yb>=yj&&yb>=yc)cout <<'B';
	else if(yc>=yj)cout <<'C';
	else cout <<'J';
}
