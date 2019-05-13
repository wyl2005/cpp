/* helloworld.cpp */  
#include <iostream>  
#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])  
{  
	const char * ptr = "abcd";
	int len = 2;//strlen(ptr);
    std::cout << "hello, world" << std::endl;  
	
	printf("say: %.*s\n",len, ptr );

    std::string str("123123 asdf");
    std::string str2("Wx11 ");

    //str.insert(0,str2);

    std::cout << str << std::endl;
    std::cout << str.size() << std::endl;
    std::cout << str.capacity() << std::endl;
    unsigned long a = std::stoul(str);
    printf("aa =%ld\n", a); 
    
    return(0);  
}  
