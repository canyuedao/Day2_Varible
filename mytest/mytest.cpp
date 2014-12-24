// mytest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
using namespace std;

int ctoi(const char *c){
	int arr[10]={0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39};
	double dresult=0;
	//int error=0;
	try{
		for(int i=0;i<=strlen(c)-1;i++){
			
				for(int j=0;j<10;j++){

					if(c[i]==arr[j]){
						dresult+=j*(pow(10.0,(double)(strlen(c)-1-i)));
						break;
					}
					if(j==9){
						throw 1;						
					}
				}			

		}
	}
	catch(int a){
		printf("%s","输入数据出错！请输入只有数字的字符串\n错误代码:");	
		return -1;
	}
	
	int iresult=int(dresult);
	return iresult;
}

int _tmain(int argc, _TCHAR* argv[])
{
// 	string str;
// 	cin>>"请输入查询日期">>str;
// 	DATE data=(DATE)str;
	//int a=5,b=10;
	////a=a^b;
	////b=a^b;
	////a=a^b;
	////a=a-b;
	//_asm mov eax,dword ptr[a];
	//_asm sub eax,dword ptr[b];
	//_asm mov dword ptr[a],eax;
	//b=a+b;
	//a=b-a;
	//printf("%d %d\n",a,b);
	//char c[]="123450";
	//int i=atoi(c);
	//printf("%d\n",i);
	//while(1);
	//short sa=32767,sb=32768;
	//unsigned short sc=65535,sd=65536;
	//int ia=2147483647,ib=2147483648;
	//unsigned int ic=4294967295,id=4294967296;
	//long la=2147483647,lb=2147483648;
	//long long lla=9223372036854775807,llb=9223372036854775808;
	//char ca='a',cb='0';
	//int ia=0;	
	
	int i=0;
	while(i<=0){
		string str;
		cin>>str;	
		//char a[]="1a23";
		i=ctoi(str.c_str());
		printf("%d\n",i);
	}
	
	
}

