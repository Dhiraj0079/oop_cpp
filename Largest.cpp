#include<stdio.h>
#include<iostream>
int main()
{
	int a,b,c;
	std::cout<<"Enter the value of a,b and c";
	std::cin>>a>>b>>c;
	if(a>b&&a>c){
		std::cout<<"a is largest value";
	}
	else if(b>a&&b>c){
		std::cout<<"b is largest value";
	}
	else{
		std::cout<<"c is largest value";
	}
}
