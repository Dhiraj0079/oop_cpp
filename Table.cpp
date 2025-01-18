#include<stdio.h>
#include<iostream>
int main()
{
int number;
std::cout<<"Enter number";
std::cin>>number;
std::cout<<"Table of number"<<"\n";
for(int i=1;i<=10;i++)
{
	std::cout<<number*i<<"\n";
}
}
