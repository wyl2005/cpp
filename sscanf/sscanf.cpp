#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main()
{
   int day, year;
   char weekday[20], month[20], dtm[100];
   int ret;

   strcpy( dtm, "USB_HUB:111" );
   ret = sscanf( dtm, "USB_HUB:%s", month );

    std::string temp = &dtm[2];

    printf("temp %s\n", temp.c_str());
//d   printf("%s %d, %d = %s\n", month, day, year, weekday );
    printf("day %s, ret=%d\n", month, ret);
    
   return(0);
}
