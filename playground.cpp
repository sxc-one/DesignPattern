#include<iostream>
int main(){
	int a,b;
	char c;
	std::cin>>a>>c>>b;
	switch(c){
		case '+':std::cout<<a<<c<<b<<"="<<a+b<<std::endl;break;
		case '-':std::cout<<a<<c<<b<<"="<<a-b<<std::endl;break;
		case '*':std::cout<<a<<c<<b<<"="<<a*b<<std::endl;break;
		case '/':std::cout<<a<<c<<b<<"="<<a/b<<std::endl;break;
		default:break;
	}
    return 0;
}

