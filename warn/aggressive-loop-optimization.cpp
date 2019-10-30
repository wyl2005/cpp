#include <iostream>
#include <stdio.h>
int main()
{
    for (int i=0; i<4; ++i)
        std::cout << i << std::endl;

    unsigned int size=0x12345678;

#if 1
    char outbuf = 0;
    for(int i=3; i>=0; i--)
    {
        outbuf = ((size >> 8*i) & 0xFF);
        printf("i=%d\n",i);
        printf("outbuf=0x%x\n",outbuf);
    }
    //std::cout << outbuf << std::endl;
        
        printf("i=%d\n",i);
#endif
    return 0;

}
