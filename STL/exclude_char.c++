#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
	string str,a,b;
	int pos;
	while(getline(cin,str)){
		getline(cin,a);
		getline(cin,b);
		pos=0; 
		while(1){
			int len1=a.length();
			int len2=b.length();
			int len=str.length();
			pos=str.find(a,pos);
			if(pos==string::npos)
				break;
			if(pos==0&&(str[pos+len1]==' '||pos+len1==len)||pos+len1==len&&str[pos-1]==' ')
				str.replace(pos,len1,b);
			else if(str[pos-1]==' '&&str[pos+len1]==' ')
				str.replace(pos,len1,b);
			else
				pos+=len1;
		}
		cout <<str<<endl;
	} 
	return 0;
} 
