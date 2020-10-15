#include<stdio.h>
#include<stdlib.h>


int divisor(int, int);

int main(){

int z =divisor(11203,7);

printf("%d", z);

return 0;



}

int divisor(int a, int b){


   int x,y;
   int i= 0;

   if (a>=0 && b>0 || a<0 && b<0){

      for( x=abs(a);x>=0; x-=abs(b) ){
      i++;

      }
      i--;

      return i;
    }

    if (a>=0 && b<0 || a<0 && b>0){

      for( x=abs(a);x>=0; x-=abs(b) ){
      i++;

      }
      i--;

      return -i;

    }

    if (b==0){
        printf("Error, divisor cannot be zero value");

        return 0;
    }


}


