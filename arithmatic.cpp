#include<iostream>
#include<stdio.h>
class calculation{
	public:
	int x,y;
	int add(int x,int y){
		return x+y;
	}
	int sub(int x,int y){
		return x-y;
	}
	int mul(int x,int y){
		return x*y;
	}
	int divide(int x,int y){
		return x/y;
	}
};

int main(){
	calculation s;
	int a,b,o,result;
	std::cout<<"enter values a and b ";
	std::cin>>a>>b;
	std::cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.division\n";
	std::cin>>o;
	if(o==1){
		result=s.add(a,b);
		std::cout<<"result: "<<result<<"\n";
	}
	else if(o==2){
		result=s.sub(a,b);
		std::cout<<"result: "<<result<<"\n";
	}
	else	if(o==3){
		result=s.mul(a,b);
		std::cout<<"result: "<<result<<"\n";
	}
	else	if(o==4){
		result=s.divide(a,b);
		std::cout<<"result: "<<result<<"\n";
	}
}
