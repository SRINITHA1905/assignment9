//Code written on December 8, 2020


// by Beerelly Srinitha




//This program implements a boolean function in C




#include <stdio.h>



//The  main function
int main(void)



{



//2 bits = 1 baud

//4 bits = 1 nibble

//8 bits = 1 byte




//unsigned char takes input as 1 byte



unsigned char  X1=0,X2=0,X3=0,X0=1;//inputs 	

unsigned char one = 1;//used for displaying the output in bit

unsigned char Y;//output



Y=X0&(~X3)&(X1&(~X2)|X2&(~X1))|(~X0)|X3;//Boolean function
  



printf("%x\n",one&Y);
//Output Y

return 0;




}