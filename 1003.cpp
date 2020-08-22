#include<iostream>
#include<string>
using namespace std;
int main(){
	int p=0,t=0,a=0,b=0,c=0,flag;
	int n;
	cin >>n;
	string str;
	for(int i=0;i<n;i++){
		if(i)printf("\n");
		cin >> str;
		flag=1;
		p=0;t=0;a=0;b=0;c=0;
		for(int j=0;j<str.length();j++){
			if(p==0&&str[j]=='A')a++;
			else if(p==0&&str[j]=='P')p++;
			else if(p==0){
				flag=0;
				break;
			}
			else if(p==1&&t==0&&str[j]=='A')b++;
			else if(p==1&&t==0&&str[j]=='T'&&b!=0)t++;
			else if(p==1&&t==0){
				flag=0;
				break;
			}
			else if(p==1&&t==1&&str[j]=='A')c++;
			else{
				flag=0;
				break;
			}
		}
		if(c!=b*a)flag=0;
		if(flag)printf("YES");
		else printf("NO");
	}
	return 0;
}
